import math

x = int(input('Введите x='))
a = int(input('Введите a='))

Y = math.atan(30 * a ** 2 + 37 * a * x - 4 * x ** 2)*-1
F = math.sinh(3 * a ** 2 + 7 * a * x + 4 * x ** 2)
G = 5*(10*a**2-11*a*x+x**2)/(24*a**2-49*a*x+15*x**2)

print(G)
print(F)
print(Y)
