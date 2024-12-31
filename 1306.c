#include <stdio.h>
#include <string.h>
#include<math.h>
void maHoa(char *str, int shift) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = fabs((str[i] - 'a' + shift) % 26) + 'a';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = fabs((str[i] - 'A' + shift) % 26) + 'A';
        }
    }
}

void giaiMa(char *str, int shift) {
    maHoa(str,26 -shift); // Giải mã bằng cách dịch ngược lại
}

int main() {
    char str[100];
    int shift;

    printf("Nhap vao mot doan van ban: ");
    fgets(str, 100, stdin);

    printf("Nhap so buoc dich chuyen: ");
    scanf("%d", &shift);

    printf("Van ban ma hoa: ");
    maHoa(str, shift);
    printf("%s\n", str);

    printf("Van ban giai ma: ");
    giaiMa(str, shift);
    printf("%s\n", str);

    return 0;
}