#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, surfaceArea, volume;

    // Nhập bán kính từ bàn phím
    printf("Nhập bán kính hình cầu: ");
    scanf("%f", &radius);

    // Tính diện tích
    surfaceArea = 4 * PI * radius * radius;

    // Tính thể tích
    volume = (4.0 / 3) * PI * radius * radius * radius;

    // In kết quả ra màn hình
    printf("Diện tích hình cầu là: %.2f\n", surfaceArea);
    printf("Thể tích hình cầu là: %.2f\n", volume);

    return 0;
}