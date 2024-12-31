#include <stdio.h>
#include <string.h>

void loaiBoDauCachThua(char str[]) {
    int len = strlen(str);
    int j = 0; // Chỉ số để ghi vào chuỗi kết quả

    for (int i = 0; i < len; i++) {
        // Bỏ qua các dấu cách liên tiếp
        if (str[i] == ' ' && str[i + 1] == ' ') {
            continue;
        }

        // Ghi ký tự vào chuỗi kết quả
        str[j] = str[i];
        j++;
    }

    // Kết thúc chuỗi kết quả
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Nhap vao mot chuoi ky tu: ");
    fgets(str, 100, stdin);

    loaiBoDauCachThua(str);

    printf("Chuoi sau khi loai bo dau cach thua: %s", str);

    return 0;
}