#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    double a, x, function;
    int N;
    int i;
    printf("%s", "Введите  x: ");
    scanf("%lf", &x);
    getchar();
    printf("%s", "Введите a: ");
    scanf("%lf", &a);
    getchar();
    printf("Input N: ");
    scanf("%d", &N);
    int *mass;
    mass = (int *) malloc(N * sizeof(int));
    printf("Input the array elements:\n");
    for (i = 0; i < N; i++)
        scanf("%d", &mass[i]);

    int tmp;
    int noSwap;

    for (int i = N - 1; i >= 0; i--) {
        noSwap = 1;
        for (int j = 0; j < i; j++) {
            if (mass[j] > mass[j + 1]) {
                tmp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = tmp;
                noSwap = 0;
            }
        }
        if (noSwap == 1)
            break;
    }
    printf("Sorted array:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", mass[i]);
    printf("\n");
    free(mass);
    return 0;
}