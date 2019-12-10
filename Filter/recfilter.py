import math
import matplotlib.pyplot as plt

x = [2 * math.sin(2 * (i * math.pi / 180)) + math.sin(1000 * (i * math.pi / 180)) for i in range(1000)]

a0 = 0.95
b1 = 0.85

y = []

for i in range(1, 1000):
    y.append(a0 * x[i] + b1 * x[i - 1])

f = plt.Figure()
plt.plot(y)
plt.show()
