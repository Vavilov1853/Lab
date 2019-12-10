import math
import matplotlib.pyplot as plt
import numpy

signal = [
    4 * math.sin(2 * (i * math.pi / 180)) + 4 * math.sin(20 * (i * math.pi / 180))
    for i in range(1000)
]

interval = []

for i in range(-100, 0):
    interval.append(i)

for i in range(1, 100):
    interval.append(i)

func = [(math.sin(i) / i) + 100 for i in interval] * numpy.blackman(199)

y = numpy.convolve(signal, func)

x = [i for i in range(len(y))]

f = plt.Figure()
plt.plot(x, y)

plt.show()
