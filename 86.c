#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &num2);

    int result = ucln(num1, num2);

    printf("Uoc so chung lon nhat cua %d va %d la: %d\n", num1, num2, result);

    return 0;
}