#include <stdio.h>

void xoay_vong(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a, b, c;

    printf("Nhap vao 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Truoc khi xoay vong: a = %d, b = %d, c = %d\n", a, b, c);

    xoay_vong(&a, &b, &c);

    printf("Sau khi xoay vong: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}