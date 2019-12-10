import math
import matplotlib.pyplot as plt
from random import random


def sma(signal, window):
    points = [[], []]
    x_axis = [i for i in range(len(signal))]
    buffer = []
    state = True
    state1 = True
    for i in range(len(signal)):
        buf = float()
        if len(signal) - i < window:
            buffer = signal[i:]
            for j in range(len(signal) - i):
                buf += signal[i + j]
            buf /= len(signal) - i
            signal[i] = buf
        else:
            buffer = signal[i:i + window]
            for j in range(window):
                buf += signal[i + j]
            buf /= window
            signal[i] = buf
        buffer.clear()

        state = True if signal[0] < signal[1] else False
        for i in range(len(signal) - 1):
            if len(signal) - i < window:
                buffer = signal[i:]
                for j in range(len(signal) - i):
                    buf += signal[i + j]
                buf /= len(signal) - i
                signal[i] = buf
            else:
                buffer = signal[i:i + window]
                for j in range(window):
                    state1 = True if signal[i] < buffer[j] else False
                buf /= window
                signal[i] = buf
            buffer.clear()

    offset = max(signal) - abs(max(signal) - min(signal)) / 2
    if max(signal) > abs(max(signal) - min(signal)) / 2:
        for i in range(len(signal)):
            signal[i] -= offset
    else:
        for i in range(len(signal)):
            signal[i] += offset

    return signal, points


s = [2 * math.sin(5 * (i * math.pi / 180)) + random() for i in range(1000)]
filt_s, p = sma(s, 5)

f = plt.Figure()
# plt.plot(s)
plt.plot(filt_s)
plt.scatter(p[1], p[0])
plt.show()
