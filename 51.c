#include<stdio.h>
#include <stdio.h>

int main() {
    float x, y;

    // Nhập phần thực và phần ảo
    printf("Nhap phan thuc x: ");
    scanf("%f", &x);
    printf("Nhap phan ao y: ");
    scanf("%f", &y);

    // In ra kết quả theo mẫu
    printf("So phuc co dang: (%.2f, %.2f)\n", x, y);

    return 0;
}