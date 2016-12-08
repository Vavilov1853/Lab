#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char recording[100], exit[1000], pattern[100];
    long int l = 0, c = 0, v = 0, matches = 0;
    int r;
    double a, x, x2, b, function;

    Metka:
    printf("Введите x: ");
    scanf("%s", recording);
    x = atof(recording);
    getchar();
    memset(recording, 0, 100);
    printf("Введите x2: ");
    scanf("%s", recording);
    x2 = atof(recording);
    getchar();
    memset(recording, 0, 100);
    printf("Введите а: ");
    scanf("%s", recording);
    a = atof(recording);
    getchar();
    memset(recording, 0, 100);
    printf("Введите параметр шага: ");
    scanf("%s", recording);
    b = atof(recording);
    getchar();
    memset(recording, 0, 100);
    printf("Ведиите шаблон: ");
    scanf("%s", pattern);
    getchar();
    memset(recording, 0, 100);
    printf("Введите 1 для вызова G, введите 2 для вызова F, введите 3 для вызова Y  \n");
    scanf("%i", &r);
    getchar();
    memset(recording, 0, 100);
    memset(exit, 0, 1000);

    switch (r) {
        case 1:
            while (x < x2) {
                if ((function <= 0.00001) || (function >= 0.00001))
                    function = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) /
                                (24 * pow(a, 2) - 49 * a * x + 15 * pow(x, 2)));
                sprintf(recording, "%lf", function);
                strcat(exit, recording);
                x = x + b;
                if (x >= x2) {
                    break;
                }
            }
            printf("%s\n", exit);
            while (l < strlen(exit)) {
                    l = strstr(exit, pattern) - exit + 1;
                    while (v != l) {
                        exit[v] = ' ';
                        v++;
                    }
                    v = 0;
                matches++;
                if (strstr(exit, pattern) == 0)
                    break;
            }
            printf("Колличество совпадений: %ld\n", matches);
            printf("Хотите посчитать другую функцию? Введите 1,если хотите, в противном случае введите любой символ.\n");
            scanf("%ld", &c);
            getchar();
            if (c == 1)
                goto Metka;
            break;
        case 2:
            while (x < x2) {
                function = atan(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2)) * -1;
                sprintf(recording, "%lf", function);
                strcat(exit, recording);
                x = x + b;
                if (x >= x2) {
                    break;
                }
            }
            printf("%s\n", exit);
            while (l < strlen(exit)) {
                l = strstr(exit, pattern) - exit + 1;
                while (v != l) {
                    exit[v] = ' ';
                    v++;
                }
                v = 0;
                matches++;
                if (strstr(exit, pattern) == 0)
                    break;
            }
            printf("Колличество совпадений: %ld\n", matches);
            printf("Хотите посчитать другую функцию? Введите 1,если хотите, в противном случае введите дургой символ.");
            scanf("%ld", &c);
            getchar();
            if (c == 1)
                goto Metka;
            break;
        case 3:
            while (x < x2) {
                if ((function > -1) && (function < 1)) {
                    function = sin(3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2));
                    sprintf(recording, "%lf", function);
                    strcat(exit, recording);
                }
                x = x + b;
            }
            printf("%s\n", exit);
            while (l < strlen(exit)) {
                l = strstr(exit, pattern) - exit + 1;
                while (v != l) {
                    exit[v] = ' ';
                    v++;
                }
                v = 0;
                matches++;
                if (strstr(exit, pattern) == 0)
                    break;
            }
            printf("Колличество совпадений: %ld\n", matches);
            printf("Если желаете посчитать другую функцию введите 1 \n");
            scanf("%ld", &c);
            getchar();
            if (c == 1)
                goto Metka;
            break;
        default:
            printf("Для выполнения действия напишите 1,2 или 3");
            break;
    }
    return 0;
}
