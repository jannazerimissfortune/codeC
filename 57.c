#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z, F;

    // Nhập giá trị của x, y, z từ bàn phím
    printf("Nhap gia tri cua x: ");
    scanf("%lf", &x);
    printf("Nhap gia tri cua y: ");
    scanf("%lf", &y);
    printf("Nhap gia tri cua z: ");
    scanf("%lf", &z);

    // Tính giá trị của biểu thức
    F = (x+y+sqrt(z))/(x*x+y*y+1)-abs(sin(x)-z*cos(y));

    // In kết quả
    printf("Gia tri cua bieu thuc la: %.2lf\n", F);

    return 0;
}