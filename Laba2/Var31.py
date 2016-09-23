import math
pi=3.14
x = int(input("Введите x:"))
a = int(input("Введите a:"))
z = str(input("Введите букву,которую xотите вычислить"))
F = 0
G = 0
Y = 0
if z == "G":
    G = 5 * (10 * a ** 2 - 11 * a * x + x ** 2) / (24 * a ** 2 - 49 * a * x + 15 * x ** 2)
    print("G =", G)
elif z == "Y":
    Y = math.atan(30 * a ** 2 + 37 * a * x - 4 * x ** 2) * -1
    if Y:
        print("Y =", Y)

elif z == "F":
    F = math.sinh(3 * a ** 2 + 7 * a * x + 4 * x ** 2)
    if F:
        print("F =", F)
    else: print("Не существует значения")
