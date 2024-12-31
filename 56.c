#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    // Nhập các hệ số a, b, c
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    // Tính delta
    delta = b * b - 4 * a * c;

    // Kiểm tra điều kiện delta > 0
    if (delta <= 0) {
        printf("Phuong trinh vo nghiem hoac co nghiem kep.\n");
        return 1; // Kết thúc chương trình
    }

    // Tính nghiệm
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    // In kết quả
    printf("Nghiem thu nhat x1 = %.2f\n", x1);
    printf("Nghiem thu hai x2 = %.2f\n", x2);

    return 0;
}