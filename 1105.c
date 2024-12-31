#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Không phải palindrome
        }
    }
    return 1; // Là palindrome
}

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);

    // Loại bỏ ký tự '\n' ở cuối chuỗi (nếu có)
    str[strcspn(str, "\n")] = 0;

    if (isPalindrome(str)) {
        printf("%s la mot chuoi palindrome.\n", str);
    } else {
        printf("%s khong phai la mot chuoi palindrome.\n", str);
    }

    return 0;
}