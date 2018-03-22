import math

while True:
    try:
        number = float(input('Введите число = '))
    except ValueError:
        print('Повелитель вы ввели неверный символ попробуйте еще раз =)')      #Проверка на правельность ввода данных#
        continue
    try:
        number1 = float(input('Введите число = '))
    except ValueError:
        print('Повелитель вы ввели неверный символ попробуйте еще раз =)')
        continue
    operation = str(input('Твое желание и я повинуюсь +,-,*,/ = '))

    if operation == '+':                                                ##
        summ = number + number1
        print("Твой результат гоподин = ",summ)

    elif operation == '-':
            minus = number - number1
            print("Твой результат гоподин = ",minus)

    elif operation == '*':
                multiplication = number * number1
                print("Твой результат гоподин = ", multiplication)

    elif operation == '/':
        if number1 != 0:
                    division = number / number1
                    print("Твой результат гоподин = ", division)
        else:
            print("Деление на ноль не возможно мой повелитель")
    else:
        print('Неправильно выбран знак или ничего не выбрано')
        continue
    continue
