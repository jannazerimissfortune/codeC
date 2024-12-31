#include <stdio.h>

int main() {
    int so;

    // Nhập số nguyên từ bàn phím
    printf("Nhap vao mot so nguyen (0-100): ");
    scanf("%d", &so);

    // Kiểm tra ràng buộc
    if (so < 0 || so > 100) {
        printf("So nhap khong hop le!\n");
        return 1;
    }

    // In kết quả
    printf("So vua nhap: %d\n", so);
    printf("Tuong ung: \\%d%%\\%c%d%%%c\\%c%d%%%c\\\n", so, '"', so, '"', '\'', so, '\'');

    return 0;
}