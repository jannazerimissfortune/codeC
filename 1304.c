#include <stdio.h>

int main() {
    char cau[100];
    int i, soTu = 1; // Khởi tạo số từ là 1 vì ít nhất có 1 từ

    printf("Nhap vao mot cau: ");
    fgets(cau, 100, stdin);

    for (i = 0; cau[i] != '\0'; i++) {
        if (cau[i] == ' ' || cau[i] == '.') {
            soTu++;
        }
    }

    printf("So tu trong cau la: %d\n", soTu);

    return 0;
}