import matplotlib.pyplot as plt ,math
import numpy as np
from random import random

def calSma(data_input: np.array, period: int):
    data_output = []
    for i in range(period):
        data_output.append(None)

    for i in range(len(data_input) - period):
        val = data_input[i + period]
        for j in data_input[i + 1:i+period]:
            val += j
        val /= period
        data_output.append(val)

    return data_output


def generate_array(length):
    array = []

    for i in range(length):
        array.append(random())

    return array


data = generate_array(1000)
x_arr = np.linspace(0,  1, len(data))
sma = calSma(data, 25)
plt.plot(data, 'r')
plt.plot(sma)
plt.show()
