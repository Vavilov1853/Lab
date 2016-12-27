#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x, a, x2, b, function, L;
    int r, j, N, i;
    int *mass;
    int change;
    int tmp;
    int noSwap;
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

    printf("%s", "Введите интервал сглаживания: ");
    scanf("%lf", &L);
    getchar();

    printf("%s", "Введите параметр шага  ");
    scanf("%lf", &b);
    getchar();
    mass = (int *) malloc(N * sizeof(int));
    printf("Введите 1 для вызова G\n");
    scanf("%i", &r);

    switch (r) {
        case 1:
            while (x < x2) {
                if ((function <= 0.00001) || (function >= 0.00001))
                    function = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) /
                                (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)));
                x = x + b;
                printf("%lf \n", function);
                mass[N] = function;
                N += 1;
                for (i = 0; i < N; i++)
                    scanf("%d", &mass[i]);

                for (i = N - 1; i >= 0; i--) {
                    noSwap = 1;
                    for (j = 0; j < i; j++) {
                        if (mass[j] > mass[j + 1]) {
                            tmp = mass[j];
                            mass[j] = mass[j + 1];
                            mass[j + 1] = tmp;
                            noSwap = 0;
                        }
                    }
                    if (noSwap == 1)
                        break;

                    printf("Sorted array:\n");
                    for (i = 0; i < N; i++)
                        printf("%d ", mass[i]);


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