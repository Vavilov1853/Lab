import math
import random

def function (location, scale):
    p = 0.0
    while p == 0.0:
        p = random.random()
    return location + scale*math.tan(math.pi*(p - 0.5))

sum = 0
count = 0
max = 15
running_avg = []
while count < max:
    num = function(5,2)
    sum += num
    count += 1
    running_avg.append(sum/count)

print (running_avg)
