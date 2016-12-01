#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x, a, x2, b, function, min_value, max_value;
    int i, j;
    int change, r;

    Metka:
    printf("%s", "Введите  x: ");
    scanf("%lf", &x);
    getchar();

    printf("%s", "Введите x2 ");
    scanf("%lf", &x2);
    getchar();

    printf("%s", "Введите a: ");
    scanf("%lf", &a);
    getchar();

    printf("%s", "Введите параметр шага  ");
    scanf("%lf", &b);
    getchar();

    double mas[i];
    j = 0;

    printf("Введите 1 для вызова G, введите 2 для вызова F, введите 3 для вызова Y  \n");
    scanf("%i", &r);

    switch (r) {
        case 1:
            while (x < x2) {
                if ((function <= 0.00001) || (function >= 0.00001))
                    function = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) /
                                (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)));
                printf("%lf \n", function);
                x = x + b;
                mas[j] = function;
                j += 1;
                j = 0;
                max_value = mas[0];
                min_value = mas[0];
                j += 1;
                if (mas[j] > max_value)
                    max_value = mas[j];
                if (mas[j] < min_value)
                    min_value = mas[j];

                printf(" Максимальное значение  = %9.3lf\n Минимальное значение = %9.3lf\n", max_value, min_value);
            }
            break;
        case 2:
            while (x < x2) {

                function = atan(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2)) * -1;
                printf("%f\n", function);
                x = x + b;
                mas[j] = function;
                j += 1;
                j = 0;
                max_value = mas[0];
                min_value = mas[0];
                j += 1;
                if (mas[j] > max_value)
                    max_value = mas[j];
                if (mas[j] < min_value)
                    min_value = mas[j];

                printf(" Максимальное значение  = %9.3lf\n Минимальное значение = %9.3lf\n", max_value, min_value);
                goto Metka;
            }
            break;
        case 3:
            while (x < x2) {
                if ((function > -1) || (function < 1)) {

                    function = sin(3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2));
                    x = x + b;
                    printf("%f\n", function);
                    mas[j] = function;
                    j += 1;
                    j = 0;
                    max_value = mas[0];
                    min_value = mas[0];
                    j += 1;
                    if (mas[j] > max_value)
                        max_value = mas[j];
                    if (mas[j] < min_value)
                        min_value = mas[j];

                    printf(" Максимальное значение  = %9.3lf\n Минимальное значение = %9.3lf\n", max_value, min_value);
                    goto Metka;
                }
                break;
                default:
                    printf("Неправильно выбрана функция.");

            }
    }
}
