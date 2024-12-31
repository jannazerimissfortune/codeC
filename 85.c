#include <stdio.h>
#include <math.h>

int factorial(int n){
    int fa=1;
    for(int i=1;i<2*n+1;i++){
        fa*=i;
    }
    return fa;
}

double sinx(double x) {
    double snx = 0, term=1;
    int n = 0, sign = 1;

    while (fabs(term) >= 0.0001) {
        term = sign * pow(x, 2*n+1) /factorial(n);
        snx += term;
        sign = sign*(-1);
        n++;
    }

    return snx;
}

int main() {
    double x;
    printf("Nhap so x: ");
    scanf("%lf", &x);
    printf("sinx voi do chinh xac 0.0001 la: %.4lf\n", sinx(x));
}