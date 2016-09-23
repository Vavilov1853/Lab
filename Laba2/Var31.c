#include <stdio.h>
#include <math.h>

int main() {
    double G, F, Y, x, a;
    char r;
    scanf("%f", &x);
    scanf("%f", &a);
    printf("Введите букву - G,F,Y \n");
    scanf("%s", &r);

    switch (r) {
        case 'G':
            G = (5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) / (24 * pow(a, 2) - 49 * a * x + 4 * pow(x, 2));
            printf("G = %lf \n", G);
            break;
        case 'F':
            F = sinh(3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2));
            printf("F = %lf \n", F);
            break;
        case 'Y':
            Y = tanh(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2));
            printf("Y = %lf \n", Y);
            break;
        default:break;
    }

    return 0;
}
