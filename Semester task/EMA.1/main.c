#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int reference[25], n, L[25], j, i;
    double EMA[25], value_a;

    printf("%s", "Введите интервал сглаживания: ");
    scanf("%d", &n);
    getchar();

    value_a = (n + 1);
    value_a = 2 / value_a;


    for (i = 0; i < 25; i++) {
        reference[i] = rand() % 50;
    }

    L[0] = reference[0];
    for (i = 0; i < 25; i++) {
        if (i - n == 0) {
            for (j = i - n; j < i; ++j) {
                if (j >= 1) {
                    L[j] = reference[j] + L[j - 1];
                }
            }
        }
        if (i == n) {
            EMA[i] = L[j - 1] / n;
        }
        if (i > n) {
            EMA[i] = value_a * reference[i] + (1 - value_a) * EMA[i - 1];

        }
        printf("Усредненные занчения %lf\n Исходные значения %d\n", EMA[i], reference[i]);
        memset(L, 0, 100);
    }

    return 0;
}