
number = float(input('Введите желаемое число = '))
sqrt = number
while sqrt * sqrt != number:
    sqrt = 0.5*(sqrt + (number/sqrt))
    print('Квадратный корень = ', sqrt)
