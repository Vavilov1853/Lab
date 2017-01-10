#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int reference[25], j, L[25], n, i;
    double SMA[20];
    n = 3;


    for (i = 0; i < 25; i++) {
        reference[i] = rand() % 100;
    }
    L[0] = reference[0];

    for (i = 0; i < 25; i++) {

        for (j = i - n; j < i; ++j) {

            if (j >= 0) {

                L[j] = reference[j] + L[j - 1];
            }
        }
        if (i >= n) {
            SMA[i] = L[i - 1] / n;
            printf("Усредненные занчения %lf\n Исходные значения %d\n", SMA[i], reference[i]);
        }
        memset(L, 0, 100);

    }

    return 0;
}