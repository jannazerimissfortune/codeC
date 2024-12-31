#include <stdio.h>

int main() {
    char kyTu;
    int soNguyen;
    float soThucDon;
    double soThucKep;

    // Nhập dữ liệu
    printf("Nhap ky tu: ");
    scanf("%c", &kyTu);

    printf("Nhap so nguyen: ");
    scanf("%d", &soNguyen);

    printf("Nhap so thuc don: ");
    scanf("%f", &soThucDon);

    printf("Nhap so thuc kep: ");
    scanf("%lf", &soThucKep);

    // In ra dữ liệu
    printf("\nKet qua:\n");
    printf("Ky tu: %c\n", kyTu);
    printf("So nguyen: %d\n", soNguyen);
    printf("So thuc don: %f\n", soThucDon);
    printf("So thuc kep: %lf\n", soThucKep);

    return 0;
}