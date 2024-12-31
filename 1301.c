#include <stdio.h>
#include <string.h>

int demDauCach(char str[]) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Nhap vao mot chuoi ky tu: ");
    fgets(str, 100, stdin);

    int soDauCach = demDauCach(str);

    printf("So ky tu dau cach trong chuoi la: %d\n", soDauCach);

    return 0;
}