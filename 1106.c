#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *ptr1, *ptr2;

    // Nhập hai chuỗi
    printf("Nhập chuỗi thứ nhất: ");
    fgets(str1, 100, stdin);
    printf("Nhập chuỗi thứ hai: ");
    fgets(str2, 100, stdin);

    // Loại bỏ ký tự '\n' ở cuối chuỗi (nếu có)
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Cho con trỏ ptr1 trỏ đến cuối chuỗi str1
    ptr1 = str1 + strlen(str1);

    // Nối chuỗi str2 vào cuối chuỗi str1
    ptr2 = str2;
    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    // Thêm ký tự null vào cuối chuỗi kết quả
    *ptr1 = '\0';

    printf("Chuỗi kết quả: %s\n", str1);

    return 0;
}