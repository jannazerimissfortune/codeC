#include <stdio.h>

int main() {
    char ch;

    // In chữ cái in thường
    printf("Bảng chữ cái in thường:\n");
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");

    // In chữ cái in hoa
    printf("\nBảng chữ cái in hoa:\n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }

    return 0;
}