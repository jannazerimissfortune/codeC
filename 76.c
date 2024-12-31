#include <stdio.h>

int main() {
    int n, giai_thua = 1;

    do {
        printf("Nhap vao mot so nguyen n(n<8): ");
        scanf("%d", &n);
        if (n <= 0 || n >= 8) {
            printf("So ban nhap khong hop le. Xin vui long nhap lai.\n");
        }
    } while (n <= 0 || n >= 8);

    for (int i = 1; i <= n; ++i) {
        giai_thua *= i;
    }
    printf("%d! = %d\n", n, giai_thua);
    return 0;
}