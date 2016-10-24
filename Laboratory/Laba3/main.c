#include <stdio.h>
#include <math.h>
int main() {
    double G, F, Y, x, a, x2, b, function, function2, difference ;
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
            for (; x < x2; x = x + b) {
                if ((G <= 0.00001) || (G >= 0.00001)) {
                    function = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) /
                                (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)));
                    printf("G = %lf \n", function);
                    function2 = ((5 * (10 * pow(a, 2) - 11 * a * (x + b) + pow(x + b, 2))) /
                                 (24 * pow(a, 2) - 49 * a * (x + b) + 4 * pow((x + b), 2)));

                    if ((function2 - function < difference)) {
                        b *= 2;

                        function2 = ((5 * (10 * pow(a, 2) - 11 * a * (x + b) + pow((x + b), 2))) /
                                     (24 * pow(a, 2) - 49 * a * (x + b) + 4 * pow((x + b), 2)));
                    }
                } else printf("%s\n", "При данном значение G выполнение функции невозможно");

            }
            printf("Если желаете посчитать другую функцию введите 1 \n");
            scanf("%d",& change);
            getchar();
            if (change == 1)
                goto Metka;
            break;
        case 2:
            for (; x >= x2; x = x + b) {
                if ((F >= -1) && (F <= 1))
                    function = sin(3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2));
                printf("F = %lf \n", function);
                function2 = sin(3 * pow(a, 2) + 7 * a * (x + b) + 4 * pow((x + b), 2));

                if ((function2 - function > difference))
                    b /= 3;
                function2 = sin(3 * pow(a, 2) + 7 * a * (x + b) + 4 * pow((x + b), 2));

                printf("Если желаете посчитать другую функцию введите 1 \n");
                scanf("%d",& change);
                getchar();
                if (change == 1)
                    goto Metka;
            }
            break;
        case 3 :
            for (; x <= x2; x = x + b) {
                if (((30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2)) * -1 > -1) || ((30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2)) * -1 < 1)) {
                    function = tan(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2)) * -1;
                    printf("%lf \n", Y);
                    function2 = tan(30 * pow(a, 2) + 37 * a * (x + b) - 4 * pow((x + b), 2)) * -1;

                    if ((function2 - function > difference));
                        b *=2;

                    } else printf("%s\n", "При данном значение Y выполнение функции невозможно");
                }

            printf("Если желаете посчитать другую функцию введите 1 \n");
            scanf("%d",& change);
            getchar();
            if (change == 1)
                goto Metka;
            break;
        default:
            printf("%s\n", "Для выполнения действия напишите 1,2 или 3");

            return 0;
    }
}
