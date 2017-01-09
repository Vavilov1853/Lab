#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>
#define N 7

int main() {
    int i, j, k, t;
    int A[3][3], B[3][3], C[3][3];
    double start,stop, timer[100];

    FILE *f;
    srand(time(NULL));
    start = omp_get_wtime();
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
            printf("%lf ", C[i][j]);
        printf("\n");

        f = fopen("/home/user/ClionProjects/Matrix/1.log", "w");
        for (t = 0; t < 20; t++) {
            stop = omp_get_wtime();
            timer[i] = stop - start;
            fprintf(f, "%f\n", timer[t]);
        }
        fclose(f);
    }
}