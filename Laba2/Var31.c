#include <stdio.h>
#include <math.h>

int main() {
    double G, F, Y, x, a;
    char r;

    printf("%s", "Введите x: ");
    scanf("%lf", &x);
    getchar();

    printf("%s", "Введите a: ");
    scanf("%lf", &a);
    getchar();

    printf("Введите 1 для вызова G, введите 2 для вызова F, введите 3 для вызова Y  \n");
    scanf("%c", &r);

    switch (r) {
        case 1:
            if ((G <= 0) || (G >= 0)) {
                G = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) / (24 * pow(a, 2) - 49 * a * x + 4 * pow(x, 2)));
                printf("%lf \n", G);
            } else printf("%s\n", "При данном значение G выполнение функции невозможно");
            break;
        case 2:
            F = sinh(3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2));
            printf("F = %lf \n", F);
            break;
        case 3 :
            if ((-1 <Y) ||  (Y < 1)) {
                Y = tanh(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2));
            } else printf("%s\n", "При данном значение Y выполнение функции невозможно");
            printf("Y = %lf \n", Y);
            break;
        default:
            printf("%s\n", "Для выполнения действия напишите 1,2 или 3");
    }

    return 0;
