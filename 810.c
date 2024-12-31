#include <stdio.h>
#include<math.h>

int main() {
    char choice;
    float pi=3.14;
    float e =2.7;

    do {
        printf("Menu:\n");
        printf("1. Cong\n");
        printf("2. Tru\n");
        printf("3. Nhan\n");
        printf("an phim khac: Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("ban lua chon chuong trinh: 1\n");
                printf("so pi la: %.2f\n",pi);
                break;
            case '2':
                printf("ban lua chon chuong trinh: 2\n");
                printf("so e la: %.2f\n",e);
                break;
            case '3':
                printf("ban lua chon chuong trinh: 3\n");
                float x;
                printf("Nhap so x: ");
                scanf("%f", &x);
                printf("ket qua sin(x) la: %.2f\n",sin(x));
                break;
            default:
                break;
        }

        printf("\nBan co muon tiep tuc? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}