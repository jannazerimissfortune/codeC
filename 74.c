#include <stdio.h>

int tam_giac_vuong_nguoc(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return n;
}
int tam_giac_vuong_can(int n) {
    for (int i = 1; i <= n; i++) {
        // In khoảng trắng
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // In các dấu sao
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
int main(){
    int n;
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%d", &n);
    tam_giac_vuong_nguoc(n);
    tam_giac_vuong_can(n);
    return 0;
}