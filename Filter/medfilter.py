import math
import matplotlib.pyplot as plt
from random import random


def median(signal, window):
    ref_signal_value = signal[20] if window < 20 else signal[window]
    _window = window
    for i in range(len(signal)):
        if len(signal) - i < window:
            buffer = signal[i:]
            buffer.sort()
            signal[i] = (buffer[len(buffer) // 2] + buffer[len(buffer) // 2 - 1]) / 2 if len(buffer) % 2 == 0 else buffer[len(buffer) // 2]
            buffer.clear()
        else:
            buffer = signal[i:i + window]
            buffer.sort()
            signal[i] = (buffer[len(buffer) // 2] + buffer[len(buffer) // 2 - 1]) / 2 if len(buffer) % 2 == 0 else buffer[len(buffer) // 2]
            buffer.clear()
            if i > window:
                if (signal[i] >= ref_signal_value * 1.01) or (signal[i] <= -ref_signal_value * 0.99):
                    _window_iter = 50 if len(signal) - i < 50 else len(signal) - i
                    for j in range(_window_iter):
                        _window += 1
                        buffer = signal[i:i + _window]
                        buffer.sort()
                        if not (signal[i] <= ref_signal_value * 1.01) and not (signal[i] >= ref_signal_value * 0.99):
                            signal[i] = (buffer[len(buffer) // 2] + buffer[len(buffer) // 2 - 1]) / 2 if len(buffer) % 2 == 0 else buffer[len(buffer) // 2]
                        else:
                            break
                        buffer.clear()
            _window = window
            ref_signal_value = signal[i]

    if max(signal) > abs(max(signal) - min(signal)) / 2:
        offset = max(signal) - abs(max(signal) - min(signal)) / 2
        for i in range(len(signal)):
            signal[i] -= offset
    else:
        offset = max(signal) + abs(max(signal) - min(signal)) / 2
        for i in range(len(signal)):
            signal[i] += offset

    return signal


s = [2 * math.sin(2 * (i * math.pi / 180)) + random() for i in range(1000)]

f = plt.Figure()
# plt.plot(s)
plt.plot(median(s, 32))

plt.show()
