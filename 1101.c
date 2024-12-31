#include <stdio.h>

int main() {
    int a, b, c;
    int *ptr;

    // Nhập 3 số nguyên
    printf("Nhap vao 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);

    // Cho con trỏ trỏ lần lượt đến các số
    ptr = &a;
    printf("Gia tri cua con tro khi tro den a: %p gia tri tai dia chi do: %d\n", ptr, *ptr);

    ptr = &b;
    printf("Gia tri cua con tro khi tro den b: %p, gia tri tai dia chi do: %d\n", ptr, *ptr);

    ptr = &c;
    printf("Gia tri cua con tro khi tro den c: %p, gia tri tai dia chi do: %d\n", ptr, *ptr);

    return 0;
}