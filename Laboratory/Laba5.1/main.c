#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char recording[200],exit[2000],template[200];
    int r;
    int change;
    double function, function2, max_value_y, max_value_x;
    float a, x, x2, b, difference;

    Metka:
    printf("%s", "Введите  x: ");
    scanf("%s", &recording);
    x= atof(recording);
    getchar();

    printf("%s", "Введите x2 ");
    scanf("%s", &recording);
    x2= atof(recording);
    getchar();

    printf("%s", "Введите a: ");
    scanf("%s", &recording);
    a = atof(recording);
    getchar();

    printf("%s", "Введите параметр шага  ");
    scanf("%s", &recording);
    a = atof(recording);
    getchar();

    printf("%s", "Введите разницу между функциями ");
    scanf("%s", &recording);
    difference = atof(recording);
    getchar();

    printf("Введите 1 для вызова G, введите 2 для вызова F, введите 3 для вызова Y  \n");
    scanf("%i", &r);

    switch (r) {
        case 1:
            while (x < x2, x = x + b) {
                if ((function <= 0.00001) || (function >= 0.00001))
                    function = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) /
                                (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)));
                sprintf(recording, "%lf \n", function);
                strcat(exit,recording);

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
            printf("%s\n",exit);
                printf("Если желаете посчитать другую функцию введите 1 \n");
                scanf("%d", &change);
                getchar();
                if (change == 1)
                    goto Metka;
                break;

                case 2:
                    while (x < x2, x = x + b) {
                        function = atan(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2)) * -1;
                        sprintf(recording,"%lf\n", function);
                        strcat(exit,recording);
                            {
                                if (x >= x2)
                                    break;
                            }
                        }
                   printf("%s\n",exit);
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
                            sprintf(recording, "%lf\n", function);
                            strcat(exit,recording);
                            {
                            if (x >= x2)
                                break;
                            }
                        }
                        printf("%s\n",exit);
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
