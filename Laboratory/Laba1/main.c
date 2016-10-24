#include <stdio.h>
#include <math.h>

int main() {
    double G, F, Y, x, a;
    scanf("%f", &x);
    scanf("%f", &a);

    G = (5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) / (24 * pow(a, 2) - 49 * a * x + 4 * pow(x, 2));
    F = sinh(3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2));
    Y = tanh(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2));

    printf("%f\n", G);
    printf("%f\n", F);
    printf("%f\n", Y);

    return 0;
}
