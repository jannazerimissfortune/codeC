#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int soNguoiChoi[3], soMayQuy[3];
    int i, j, count = 0;

    // Khởi tạo bộ số ngẫu nhiên
    srand(time(NULL));

    // Nhập số của người chơi
    printf("Nhap 3 so cua ban (tu 0 den 9):\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &soNguoiChoi[i]);
        if (soNguoiChoi[i] < 0 || soNguoiChoi[i] > 9) {
            printf("So nhap khong hop le!\n");
            return 1; // Thoat chuong trinh
        }
    }

    // Tạo bộ số may mắn
    for (i = 0; i < 3; i++) {
        soMayQuy[i] = rand() % 10;
    }

    printf("Bo so may man: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", soMayQuy[i]);
    }
    printf("\n");

    // So sánh và xác định giải thưởng
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (soNguoiChoi[i] == soMayQuy[j]) {
                count++;
                break; // Ngừng kiểm tra số tiếp theo nếu đã tìm thấy trùng
            }
        }
    }

    switch (count) {
        case 0:
            printf("Ban chua trung giai nao!\n");
            break;
        case 1:
            printf("Chuc mung! Ban dat giai Khuyến khích!\n");
            break;
        case 2:
            printf("Chuc mung! Ban dat giai Nhat!\n");
            break;
        case 3:
            printf("Chuc mung! Ban dat giai Dac biet!\n");
            break;
    }

    return 0;
}