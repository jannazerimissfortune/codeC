#include <stdio.h>
#include <math.h>

int main() {
    int a;

    printf("Nhap vao mot so nguyen a: ");
    scanf("%d", &a);

    // Tính toán các giá trị
    int a2 = a * a;
    int a3 = a * a * a;
    int a4 = pow(a, 4); // Sử dụng hàm pow() để tính lũy thừa

    // In kết quả
    printf("a^2 = %d\n", a2);
    printf("a^3 = %d\n", a3);
    printf("a^4 = %d\n", a4);

    return 0;
}#