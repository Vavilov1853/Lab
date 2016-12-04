#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main() {
    int i, j, k;
    double A, B, C;

    srand(time(NULL));

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            A[i][j] = rand() % 20;
            B[i][j] = rand() % 20;
        }
    for (i = 0; i < N; i++)

        for (j = 0; j < N; j++) {
            C[i][j] = 0;
            for (k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    printf("\nРезультат умножения\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%3d ", C[i][j]);
        printf("\n");
    }
}