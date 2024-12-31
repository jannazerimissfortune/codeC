#include <stdio.h>
#include <string.h>

void thayTheKyTu(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[100], oldChar, newChar;

    printf("Nhap vao mot xau: ");
    fgets(str, 100, stdin);

    printf("Nhap ky tu can thay the: ");
    scanf(" %c", &oldChar); // Dùng khoảng trắng trước %c để bỏ qua dấu cách thừa

    printf("Nhap ky tu thay the: ");
    scanf(" %c", &newChar);

    thayTheKyTu(str, oldChar, newChar);

    printf("Xau sau khi thay the: %s\n", str);

    return 0;
}