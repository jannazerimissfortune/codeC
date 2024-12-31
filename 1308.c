#include <stdio.h>
#include <string.h>

int main() {
    char text[100], kyTu;
    int count = 0;

    printf("Nhap vao mot doan van ban: ");
    fgets(text, 100, stdin);

    printf("Nhap vao ky tu can dem: ");
    scanf(" %c", &kyTu);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == kyTu) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong doan van.\n", kyTu, count);

    return 0;
}#include <stdio.h>
#include <string.h>

int main() {
    char text[100], kyTu;
    int count = 0;

    printf("Nhap vao mot doan van ban: ");
    fgets(text, 100, stdin);

    printf("Nhap vao ky tu can dem: ");
    scanf(" %c", &kyTu);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == kyTu) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong doan van.\n", kyTu, count);

    return 0;
}