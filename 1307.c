#include <stdio.h>
#include <string.h>

void dichChuoi(char str[], int shift) {
    char str1[100];
    strcpy(str1, str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        int newIndex = (i - shift+len) % len; // Tính vị trí mới

        str[i] = str1[newIndex];
    }
}

int main() {
    char str[100];
    int shift;

    printf("Nhap vao mot chuoi: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Nhap so buoc dich chuyen (am de dich trai, duong de dich phai): ");
    scanf("%d", &shift);


    dichChuoi(str, shift);

    printf("Chuoi sau khi dich chuyen: %s\n", str);

    return 0;
}