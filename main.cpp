#include <stdio.h>
#include <math.h>

int main() {
    double G, F, Y, x, a;
    const double pi = 3.14;
    scanf("%f", &x);
    scanf("%f", &a);

    G = (5 * (10 * pow(a, 2) - 11 * a * x + pow(x, 2))) / (24 * pow(a, 2) - 49 * a * x + 4 * pow(x, 2));
    F = sinh(3 * pow(a, 2) + 7 * a * x + 4 * pow(x, 2));
    Y = tanh(30 * pow(a, 2) + 37 * a * x - 4 * pow(x, 2));

    printf("%1.3f\n", G);
    printf("%1.3f\n", F);
    printf("%1.3f\n", Y);

    return 0;;
}
