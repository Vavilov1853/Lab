import math

Metka = 1

while Metka == 1:
x = float(input("Введите x:"))
x2 = float(input("Введите х2:"))
a = float(input("Введите a:"))
b = float(input("Введите параметр шага:"))
difference = float(input("Введите разницу между функциями:"))
n = str(input("Введите букву фкнуции,которую xотите вычислить"))

if n == 'G':
    while x < x2:
        if function <= 0.00001 or function >= 0.00001:
            function = 5 * (10 * a ** 2 - 11 * a * x + x ** 2) / (24 * a ** 2 - 49 * a * x + 15 * x ** 2)
            print("G = ", function)
            function2 = 5 * (10 * a ** 2 - 11 * a * (x +b) + (x+b) ** 2) / (24 * a ** 2 - 49 * a * (x+b) + 15 * (x +b) ** 2)

            if (function2 -function) >difference:
                b *= 2
                function2 = 5 * (10 * a ** 2 - 11 * a * (x + b) + (x + b) ** 2) / (24 * a ** 2 - 49 * a * (x + b) + 15 * (x + b) ** 2)
        x += b
        if x >= x2:
            break
elif n == 'Y':
    while x < x2:
        function = math.atan(30 * a ** 2 + 37 * a * x - 4 * x ** 2) * -1
        print("Y = ", function)
        function2 = math.atan(30 * a ** 2 + 37 * a * (x +b) - 4 * (x + b) ** 2) * -1
        if (function2 - function) > difference:
                b *= 2
                function2 = math.atan(30 * a ** 2 + 37 * a * (x + b) - 4 * (x + b) ** 2) * -1
        x += b
        if x >= x2:
            break
elif n == 'F':
    while x < x2:
        if function > -1 and function < 1:
            function = math.sin(3 * a ** 2 + 7 * a * x + 4 * x ** 2)
            print("F = ", function)
            function2 = math.sin(3 * a ** 2 + 7 * a * (x + b) + 4 * (x +b) ** 2)
            if (function2 - function) > difference:
                b *= 2
                function2 = math.sin(3 * a ** 2 + 7 * a * (x + b) + 4 * (x + b) ** 2)
        x += b
        if x >= x2:
            break
else:
    print("Неправильно выбрана функция, или ничего не выбрано")
Metka = int(input("Если хотите посчитать другую функцию введите 1"))
if Metka != 1:
        break