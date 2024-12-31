#include <stdio.h>

int main() {
    float a, b, c, max;

    // Nhập 3 số thực từ bàn phím
    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);
    printf("Nhap so thu ba: ");
    scanf("%f", &c);

    // Sử dụng biểu thức điều kiện ?: để tìm số lớn nhất
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);

    // In ra kết quả
    printf("So lon nhat la: %.2f\n", max);

    return 0;
}