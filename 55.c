#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta;

    // Nhập các hệ số a, b, c
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    // Tính delta
    delta = b * b - 4 * a * c;

    // In kết quả
    printf("Delta = %.2f\n", delta);

    return 0;
}