
# coding: utf-8

# # 21M.359 Fundamentals of Music Processing
# ## Lab3

# In[1]:

import numpy as np
import matplotlib.pyplot as plt
import IPython.display as ipd
from ipywidgets import interact

import sys
sys.path.append("../common")
from util import *
import fmp


# %matplotlib inline
get_ipython().magic(u'matplotlib notebook')
plt.rcParams['figure.figsize'] = (12, 4)


# In[52]:

snd = load_wav("audio/voiceD4.wav")
sr = 22050
ipd.Audio(snd,rate=sr)




# In[104]:

# answer:
def bin_to_freq(k,Fs,N):
    
    return k * float(Fs)/N

def freq_to_pitch(f):
    return np.log2(f/ 440.)*12 + 69


def pitch_to_freq(p):
    return 440.*2**((p-69)/12.)

def freq_to_samp(f,sr):
    return int(sr/f/2)


# In[127]:

# answer:
def zpad(x,Nzp):
    if len(x) >= Nzp:
        return x
    else: 
        zero_len = Nzp-len(x)
    return np.concatenate([np.zeros(zero_len),x])

N_new = 2048*2**4
xw_new = zpad(xw, N_new)
# answer:
fft_new = np.fft.rfft(xw_new)
l_new = len(fft_new)
ab_new = np.abs(fft_new)
plt.figure()
plt.plot(ab_new)

peaks = find_peaks(ab_new, thresh= .125)


freqs_new = bin_to_freq(peaks,sr,N_new)
freq_to_pitch(freqs_new)


# In[142]:

def epoch_indices(snd, samples):
    ind = np.argmax(snd[0:samples])
    epochs = []
    epochs.append(ind)
    while ind < len(snd):
        ind += samples
        epochs.append(ind)
    return epochs

def new_epochs(snd, samples): #new samples length
    ind = samples
    epochs = []
    epochs.append(ind)
    while ind<len(snd):
        ind += samples
        epochs.append(ind)
    return epochs

def nearest(new, epochs):
    idx = (np.abs(np.array(epochs)-new)).argmin()
    return epochs[idx]

def PSOLA(snd, epoch_indices,new_epochs, samples):
    snd = np.array(snd)
    hann = np.hanning(2*samples + 1)
    new_snd = np.zeros(len(snd))

    for new in new_epochs:
        near = nearest(new, epoch_indices)

        if near <= samples:
            window = hann[samples-near:]*snd[0:near+samples+1]
        elif near >= len(snd) - samples:
            window = hann[:samples + (len(snd)-near)]*snd[near-samples:]
        else:
            
            window = hann*snd[near-samples:near+samples+1]
            if new <= samples:
                new_snd[0:len(window)] += window
            elif new > len(snd) - samples:
                new_snd[:len(snd)-new+samples]
            else:
                new_snd[new-samples:new+samples+1] += window
    return new_snd
        
            
D4_samp =freq_to_samp( pitch_to_freq(50),sr )

G4_samp = freq_to_samp( pitch_to_freq(50+15),sr )

fft =np.fft.rfft(snd)
fft2 = np.fft.rfft(new)

ep = epoch_indices(snd,D4_samp)
nep = new_epochs(snd,G4_samp)


new = PSOLA(snd,ep,nep,D4_samp)

plt.figure()
plt.plot(snd[0:1000])

plt.figure()
plt.plot(new[0:1000])

ipd.Audio(new,rate=sr)


# In[50]:

ipd.Audio(snd, rate=sr)


# In[ ]:



