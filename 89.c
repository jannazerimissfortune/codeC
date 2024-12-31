#include <stdio.h>

int main() {
    char choice;
    double num1, num2, result;

    while (1) {
        printf("Menu:\n");
        printf("1. Cong\n");
        printf("2. Tru\n");
        printf("3. Nhan\n");
        printf("4. Chia\n");
        printf("an phim khac: thoat\n");
        printf("moi ban lua chon chuong trinh: ");
        scanf(" %c", &choice);

        if (choice == '1') {
            // Thực hiện phép cộng
            printf("ban lua chon chuong trinh: cong\n");
            printf("Nhap so thu nhat: ");
            scanf("%lf", &num1);
            printf("Nhap so thu hai: ");
            scanf("%lf", &num2);
            result = num1 + num2;
            printf("Ket qua: %.2lf\n", result);
        } else if (choice == '2') {
            printf("ban lua chon chuong trinh: tru\n");
            printf("Nhap so tru: ");
            scanf("%lf", &num1);
            printf("Nhap so bi tru: ");
            scanf("%lf", &num2);
            result = num1 - num2;
            printf("Ket qua: %.2lf\n", result);
        } else if (choice == '3') {
            printf("ban lua chon chuong trinh: nhan\n");
            printf("Nhap so hang thu nhat: ");
            scanf("%lf", &num1);
            printf("Nhap so hang thu hai: ");
            scanf("%lf", &num2);
            result = num1 * num2;
        } else if (choice == '4') {
            printf("ban lua chon chuong trinh: chia\n");
            printf("Nhap so chia: ");
            scanf("%lf", &num1);
            printf("Nhap so bi chia: ");
            scanf("%lf", &num2);
            if (num2 == 0) {
                printf("Loi: Khong the chia cho 0!\n");
            } else {
                result = num1 / num2;
                printf("Ket qua: %.2lf\n", result);
            }
        }
        else {
            printf("Tam biet!\n");
            break;
        }
    }

    return 0;
}