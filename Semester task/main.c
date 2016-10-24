#include <stdio.h>

int main() {
    double a, x;
    int i;

    printf("Введите число: ");
    scanf("%lf", &a);

    x = a;

        while (((x * x > a)) && (i < 200)) {
            x = 0.5 * (x + (a / x));
            i++;
            break;
        }
        printf("Квардратный корень из числа %f равен: %f", a, x);

        return 0;
    }
