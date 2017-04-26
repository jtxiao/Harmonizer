/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * This file is necessary for your project to build.
 * Please do not delete it.
 *
 * ========================================
*/
//#include "VDAC8_1.h"
#include "Timer_1.h"
#include <math.h>

int adcResult = 0;
int outCount = 0;

// set up buffers
int t = 20;
int fs = 22050;
int frame_size = 0;
float bufferIn[];
float bufferOut[];

int time2sample(int fs, int t){ //fs is sampling rate, time is time in ms
  return fs*t/1000;
}

void td_psola(float *bufferIn, float *bufferOut, int bufSize){
    int i;
    for (i = 0; i < bufSize; i=i+1) {
        bufferOut[i] = bufferIn[i + bufSize - 1];
    }
}

float getHanningCoef(int N, int idx) {
    return (float) (0.5 * (1.0 - cos(2.0 * M_PI * idx / (N - 1))));
}

int findMaxArrayIdx(float *array, int minIdx, int maxIdx) {
    int ret_idx = minIdx;

    for (int i = minIdx; i < maxIdx; i++) {
        if (array[i] > array[ret_idx]) {
            ret_idx = i;
        }
    }

    return ret_idx;
}

int findClosestIdxInArray(float *array, float value, int minIdx, int maxIdx) {
    int retIdx = minIdx;
    float bestResid = abs(array[retIdx] - value);

    for (int i = minIdx; i < maxIdx; i++) {
        if (abs(array[i] - value) < bestResid) {
            bestResid = abs(array[i] - value);
            retIdx = i;
        }
    }

    return retIdx;
}

void findEpochLocations(float *epochLocations, float *bufferIn, int periodLen, int frame_size) {
    // This algorithm requires that the epoch locations be pretty well marked
    int i = 0;

    int largestPeak = findMaxArrayIdx(bufferIn, frame_size/4, frame_size*3/4);
    epochLocations[i] = largestPeak;

    // First go right
    int epochCandidateIdx = epochLocations[0] + periodLen;
    while (epochCandidateIdx < BUFFER_SIZE) {
        i = i + 1;
        epochLocations[i] = epochCandidateIdx;
        epochCandidateIdx += periodLen;
    }

    // Then go left
    epochCandidateIdx = epochLocations[0] - periodLen;
    while (epochCandidateIdx > 0) {
        epochLocations.push_back(epochCandidateIdx);
        epochCandidateIdx -= periodLen;
    }

    // Sort in place so that we can more easily find the period,
    // where period = (epochLocations[t+1] + epochLocations[t-1]) / 2
    std::sort(epochLocations.begin(), epochLocations.end());

    // Finally, just to make sure we have our epochs in the right
    // place, ensure that every epoch mark (sans first/last) sits on a peak
    for (int i = 1; i < epochLocations.size() - 1; i++) {
        int minIdx = epochLocations[i] - EPOCH_PEAK_REGION_WIGGLE;
        int maxIdx = epochLocations[i] + EPOCH_PEAK_REGION_WIGGLE;

        int peakOffset = findMaxArrayIdx(bufferIn, minIdx, maxIdx) - minIdx;
        peakOffset -= EPOCH_PEAK_REGION_WIGGLE;

        epochLocations[i] += peakOffset;
    }
}


CY_ISR(isr_1_Interrupt)
{
  float dac = bufferOut[outCount];
  VDAC8_1_SetValue(dac);
  Timer_1_ReadStatusRegister();
  if(outCount == frame_size){outCount = 0;}
}

void main()
{
  float bufferIn[3 * frame_size];
  float bufferOut[3 * frame_size];
  unsigned char j = 50;        // milliseconds delay
  int start = 0;
  int frame_size = time2sample(fs,t);


  ADC_DelSig_1_Start();        // start the ADC_DelSig_1
  ADC_DelSig_1_StartConvert();    // start the ADC_DelSig_1 conversion
  CyGlobalIntEnable;
    isr_1_Start();
    Timer_1_Start();
  VDAC8_1_Start();

  float data[frame_size];

  int dataCount = 0;
    for(;;)
    {

      if( ADC_DelSig_1_IsEndConversion() )
      {
        dataCount += 1;
        adcResult = ADC_DelSig_1_GetResult16();    // read the adc and assign the value adcResult
         if (adcResult & 0x8000)
         {
          adcResult = 0;       // ignore negative ADC results
         }
         else if (adcResult >= 0xfff)
         {
          adcResult = 0xfff;      // ignore high ADC results
         }
        data[dataCount] = adcResult;

        if (!start){
                    int i;
          for(i = frame_size; i < 2*frame_size; i++){
            bufferIn[i + 2 * frame_size - 1] = data[i - frame_size];
          }
          start = 1;
        }
        else{
                int i;
          // Finally, put in our new data.
          for (i = 0; i <frame_size; i = i+1) {
              bufferIn[i + 2 * frame_size - 1] = data[i];
          }
        }
        if (dataCount == frame_size){
          dataCount = 0;
                    int i;
          for (i = 0; i < 2 * frame_size; i=i+1) {
              bufferIn[i] = bufferIn[i + frame_size - 1];
          }
          td_psola(bufferIn, bufferOut, 3 * frame_size);
                    int j;
          for ( j = 0; j < 2 * frame_size; j=j+1) {
                  bufferOut[j] = bufferOut[j + frame_size - 1];
              }
                int k;
          for (k = 0; k < frame_size; k=k+1) {
              bufferOut[k + 2 * frame_size - 1] = 0;
          }
        }
      }
    }

}

/* [] END OF FILE */
