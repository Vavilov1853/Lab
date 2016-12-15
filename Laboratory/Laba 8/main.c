#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main() {
    double x[200];
    double y[200];
    double distance, mass, change_x, change_y, radius, start, stop;
    int i = 0, change = 0;
    srand(time(NULL));

    start = omp_get_wtime();
    radius = (double) rand() / RAND_MAX * (10.0);
    for (i = 0; i < 200; i++) {
        x[i] = (double) rand() / RAND_MAX * (10.0 + 10.0);
        y[i] = (double) rand() / RAND_MAX * (10.0 + 10.0);

        change = rand() % 100;

        x[change] = change_x;
        y[change] = change_y;

        for (i = 0; i < 100; i++) {
            change_x = x[i];
            change_y = y[i];
            distance = sqrt(pow(2, change_x -x[i])) + pow(2, change_y - y[i]);
            if (distance < radius)
                stop = omp_get_wtime();

            printf("Радиус окрестности: %lf\n", radius);
            printf("Количество точек в заданной окрестности: %d\n", change);
            printf("Время выполнения программы: %lf\n\n", stop - start);

            return 0;
        }
    }
}