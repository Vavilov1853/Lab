#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    struct
    {
        double G[200];
        double F[200];
        double Y[200];
    }functions;

    int i = 0;
    char value[200];
    double a, x, x2, b;
    double memory[1];

    printf("Введите x: ");
    scanf("%s", value);
    x = atof(value);
    getchar();
    memset(value, 0, 200);
    printf("Введите x2: ");
    scanf("%s", value);
    x2 = atof(value);
    getchar();
    memset(value, 0, 100);
    printf("Введите  а: ");
    scanf("%s", value);
    a = atof(value);
    getchar();
    memset(value, 0, 100);
    printf("Введите параметр шага: ");
    scanf("%s", value);
    b = atof(value);
    getchar();
    memset(value, 0, 100);

    memory[0] = x;
    memory[1] = x2;

    while (x < x2)
    {
        if (((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) / (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2))) <=0.00001  || ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) / (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)))) {
            functions.G[i] = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) /
                              (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)));
            printf("G  %f\n", functions.G[i]);
        }
        i++;
        if (i > 100)
        {
            printf("Массив переполнен");
            break;
        }
        x = x + b;
        if (x >= x2) {
            break;
        }
    }
    printf("==================================\n");

    i = 0;
    x = memory[0];
    x2 = memory[1];

    while (x < x2)
    {
        functions.F[i] = atan(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2)) * -1;
        printf("F  %f\n", functions.F[i]);
        i++;
        if (i > 100)
        {
            printf("Массив переполнен.");
            break;
        }
        x = x + b;
        if (x >= x2) {
            break;
        }
    }
    printf("==================================\n");

    i = 0;
    x = memory[0];
    x2 = memory[1];

    while (x < x2)
    {
        if ((3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2) > -1) || (15 * a * a - 29 * a * x + 12 * x * x) < 1) {
            functions.Y[i] = sin(3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2));
            printf("Y  %f\n", functions.Y[i]);
        }
        i++;
        if (i > 100)
        {
            printf("Массив переполнен.");
            break;
        }
        x = x + b;
        if (x >= x2) {
            break;
        }
    }

    return 0;
}