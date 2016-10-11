#include <stdio.h>
#include <math.h>

int main() {
    double G, F, Y, x, a, x2, b;
    int r;

    printf("%s", "Введите  x: ");
    scanf("%lf", &x);
    getchar();

    printf("%s", "Введите a: ");
    scanf("%lf", &a);
    getchar();

    printf("%s", "Введите x2 ");
    scanf("%lf", &x2);
    getchar();

    printf("%s", "Введите параметр шага  ");
    scanf("%lf", &b);
    getchar();


    printf("Введите 1 для вызова G, введите 2 для вызова F, введите 3 для вызова Y  \n");
    scanf("%i", &r);

    switch (r) {
        case 1:
            for (; x < x2; x = x + b) {
                if ((G <= 0.00001) || (G >= 0.00001)) {
                    G = ((5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) /
                         (24 * pow(a, 2) - 49 * a * x + 4 * pow(x, 2)));
                    printf("%lf \n", G);
                } else printf("%s\n", "При данном значение G выполнение функции невозможно");

            }
            break;
        Metka:
        case 2:
            for (; x >= x2; x = x - b) {
                F = sin(3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2));
                printf("%lf \n", F);
            }
            if()

                printf("%s" 'Введите 3 если хотите запустить заново' );
            goto Metka;

         case 3 :
            for (; x <= x2; x = x + b) {
                if ((Y > -1) && (Y < 1)) {
                    Y = tan(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2));
                } else printf("%s\n", "При данном значение Y выполнение функции невозможно");
                printf("%lf \n", Y);
            }
            break;
        default:
            printf("%s\n", "Для выполнения действия напишите 1,2 или 3");

            return 0;
    }
}
