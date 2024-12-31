#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sinx, factorial;
    int n = 1;

    printf("Nhap gia tri x: ");
    scanf("%lf", &x);

    sinx = x;
    factorial = 1;
    term = x;

    while (fabs(term) >= 0.0001) {
        factorial *= (2 * n) * (2 * n + 1);
        term = -term * x * x / factorial;
        sinx += term;
        n++;
    }

    printf("sin(%lf) = %lf\n", x, sinx);

    return 0;
}   