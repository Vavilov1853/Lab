#include <stdio.h>
#include <math.h>


int main() {
    double x, a, x2, b, function, function2, difference;
    int r;
    int change;
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

    printf("%s", "Введите разницу между функциями ");
    scanf("%lf", &difference);
    getchar();


    printf("Введите 1 для вызова G, введите 2 для вызова F, введите 3 для вызова Y  \n");
    scanf("%i", &r);

    switch (r) {
        case 1:
            while (x < x2, x = x + b) {
                if ((function <= 0.00001) || (function >= 0.00001))
                    function = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) /
                                (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)));
                printf("%lf \n", function);

                function2 = ((5 * (10 * pow(a, 2) - 11 * a * (x + b) + pow(x + b, 2))) /
                             (24 * pow(a, 2) - 49 * a * (x + b) + 4 * pow((x + b), 2)));

                if (function2 - function > difference) {

                    {
                        if (x >= x2)
                            break;
                    }
                    b *= 2;
                    function2 = ((5 * (10 * pow(a, 2) - 11 * a * (x + b) + pow(x + b, 2))) /
                                 (24 * pow(a, 2) - 49 * a * (x + b) + 4 * pow((x + b), 2)));
                    break;
                }
            }
            printf("Если желаете посчитать другую функцию введите 1 \n");
            scanf("%d", &change);
            getchar();
            if (change == 1)
                goto Metka;
            break;

        case 2:
            while (x < x2, x = x + b) {

                function = atan(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2)) * -1;
                printf("%f\n", function);

                function2 = atan(30 * pow(a, 2) + 37 * a * (x + b) - 4 * pow((x + b), 2)) * -1;

                if (function2 - function > difference)
                    b *= 2;
                function2 = atan(30 * pow(a, 2) + 37 * a * (x + b) - 4 * pow((x + b), 2)) * -1;
                {
                    if (x >= x2)
                        break;
                }
            }
            printf("Если желаете посчитать другую функцию введите 1 \n");
            scanf("%d", &change);
            getchar();
            if (change == 1)
                goto Metka;
            break;

        case 3:
            while (x < x2, x = x + b) {
                if (function > -1 && function < 1) {
                    function = sin(3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2));
                    printf("%f\n", function);

                    if (function2 - function > difference)
                        b *= 2;
                    function2 = sin(3 * pow(a, 2) + 7 * a * (x + b) + 4 * pow((x + b), 2));
                }
                if (x >= x2) {
                    break;
                }
                printf("Если желаете посчитать другую функцию введите 1 \n");
                scanf("%d", &change);
                getchar();
                if (change == 1)
                    goto Metka;
                break;
                default:
                    printf("Для выполнения действия напишите 1,2 или 3");
                break;
            }
            return 0;
    }
}