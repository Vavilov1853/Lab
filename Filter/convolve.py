from scipy import signal
import matplotlib.pyplot as plt
import numpy as np
import math
from random import random

# sig = np.repeat([0., 3., 0.], 200)

f = 10
sig1 = [4 * math.sin(f * (math.pi * i / 180)) + random() for i in range(500)]

win = signal.blackman(199)

inter = []

for i in range(-100, 0):
    inter.append(i)

for i in range(1,100):
    inter.append(i)

kernel = [math.sin(i)/i for i in inter] * win

filtered = signal.convolve(sig1, kernel, mode='same')

fig, (ax_orig, ax_win, ax_filt) = plt.subplots(3, 1, sharex=True)

ax_orig.plot(sig1)
ax_orig.set_title('Original pulse')
ax_orig.margins(0, 0.1)

ax_win.plot(win)
ax_win.set_title('Filter impulse response')
ax_win.margins(0, 0.1)

ax_filt.plot(filtered)
ax_filt.set_title('Filtered signal')
ax_filt.margins(0, 0.1)
fig.tight_layout()
fig.show()
