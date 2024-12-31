#include <stdio.h>

int main() {
    int n, hangTram, hangChuc, hangDonVi;

    // Nhập số nguyên dương n có 3 chữ số
    printf("Nhap so nguyen duong n co 3 chu so: ");
    scanf("%d", &n);

    // Kiểm tra xem n có đúng 3 chữ số không
    if (n < 100 || n > 999) {
        printf("So n khong hop le. Xin vui long nhap lai.\n");
        return 1;
    }

    // Tách từng chữ số
    hangTram = n / 100;
    hangChuc = (n % 100) / 10;
    hangDonVi = n % 10;

    // Đọc từng chữ số
    printf("%d: ", n);
    switch (hangTram) {
        case 1: printf("Mot tram "); break;
        case 2: printf("Hai tram "); break;
        case 3: printf("ba tram "); break;
        case 4: printf("bon tram "); break;
        case 5: printf("nam tram "); break;
        case 6: printf("sau tram "); break;
        case 7: printf("bay tram "); break;
        case 8: printf("tam tram "); break;
        case 9: printf("chin tram "); break;

    }
    switch (hangChuc) {
        case 0: break; // Nếu hàng chục bằng 0 thì không cần đọc
        case 1: printf("muoi "); break;
        case 2: printf("hai muoi "); break;
        case 3: printf("ba muoi "); break;
        case 4: printf("bon muoi "); break;
        case 5: printf("nam muoi "); break;
        case 6: printf("sau muoi "); break;
        case 7: printf("bay muoi "); break;
        case 8: printf("tam muoi "); break;
        case 9: printf("chin muoi "); break;
     
    }
    switch (hangDonVi) {
        case 1: printf("Mot  "); break;
        case 2: printf("Hai "); break;
        case 3: printf("ba "); break;
        case 4: printf("bon "); break;
        case 5: printf("nam "); break;
        case 6: printf("sau "); break;
        case 7: printf("bay "); break;
        case 8: printf("tam "); break;
        case 9: printf("chin "); break;

    }

    return 0;
}