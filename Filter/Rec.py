import matplotlib.pyplot as plt
import math
import numpy as np
from random import random

f = 10
x = [4 * math.sin(f * (math.pi * i / 180)) + random() for i in range(500)]
i = 0
y = []
a0 = 0.95
b1 = 0.85

for i in range(1, 500):
    y.append(a0 * x[i] + b1 * x[i-1])

plt.figure(1)
# plt.subplot(221)
plt.plot(y)

plt.figure(2)
plt.plot(x)

plt.show()

