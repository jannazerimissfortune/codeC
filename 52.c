#include <stdio.h>

int main() {
    int a, b, c, Kq1, Kq2;

    // Nhập giá trị cho a, b, c
    printf("Nhap gia tri cho a: ");
    scanf("%d", &a);
    printf("Nhap gia tri cho b: ");
    scanf("%d", &b);
    printf("Nhap gia tri cho c: ");
    scanf("%d", &c);

    // Tính toán
    Kq1 = a++ + ++a; // a++ được tính sau, ++a được tính trước
    Kq2 = --a - b-- * ++c; // --a được tính trước, b-- được tính sau, ++c được tính trước

    // In kết quả
    printf("Gia tri cua a sau khi tinh toan: %d\n", a);
    printf("Gia tri cua b sau khi tinh toan: %d\n", b);
    printf("Gia tri cua c sau khi tinh toan: %d\n", c);
    printf("Ket qua Kq1: %d\n", Kq1);
    printf("Ket qua Kq2: %d\n", Kq2);

    return 0;
}