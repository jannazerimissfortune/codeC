#include <stdio.h>

struct NgayThangNam {
    int ngay;
    int thang;
    int nam;
};
void nhapNgay(struct NgayThangNam *ngay) {
    do {
        printf("Nhap ngay (1-31): ");
        scanf("%d", &ngay->ngay);
        printf("Nhap thang (1-12): ");
        scanf("%d", &ngay->thang);
        printf("Nhap nam: ");
        scanf("%d", &ngay->nam);

        // Kiểm tra tính hợp lệ của ngày
        if (ngay->thang < 1 || ngay->thang > 12 || ngay->ngay < 1 || ngay->ngay > 31) {
            printf("Ngay thang khong hop le. Xin nhap lai!\n");
        } else if (ngay->thang == 2) {
            // Kiểm tra năm nhuận
            if ((ngay->nam % 4 == 0 && ngay->nam % 100 != 0) || ngay->nam % 400 == 0) {
                if (ngay->ngay > 29) {
                    printf("Thang 2 nam nhuan chi co 29 ngay. Xin nhap lai!\n");
                }
            } else {
                if (ngay->ngay > 28) {
                    printf("Thang 2 nam thuong chi co 28 ngay. Xin nhap lai!\n");
                }
            }
        }
    } while (ngay->thang < 1 || ngay->thang > 12 || ngay->ngay < 1 || ngay->ngay > 31 ||
             (ngay->thang == 2 && ((ngay->nam % 4 == 0 && ngay->nam % 100 != 0) || ngay->nam % 400 == 0) && ngay->ngay > 29) ||
             (ngay->thang == 2 && !(ngay->nam % 4 == 0 && ngay->nam % 100 != 0) && !(ngay->nam % 400 == 0) && ngay->ngay > 28));
}
int soSanhNgay(struct NgayThangNam ngay1, struct NgayThangNam ngay2) {
    if (ngay1.nam < ngay2.nam) {
        return -1;
    } else if (ngay1.nam > ngay2.nam) {
        return 1;
    } else {
        if (ngay1.thang < ngay2.thang) {
            return -1;
        } else if (ngay1.thang > ngay2.thang) {
            return 1;
        } else {
            if (ngay1.ngay < ngay2.ngay) {
                return -1;
            } else if (ngay1.ngay > ngay2.ngay) {
                return 1;
            } else {
                return 0;
            }
        }
    }
}
int main() {
    struct NgayThangNam ngay1, ngay2;

    printf("Nhap ngay 1:\n");
    nhapNgay(&ngay1);

    printf("Nhap ngay 2:\n");
    nhapNgay(&ngay2);

    int ketQua = soSanhNgay(ngay1, ngay2);

    if (ketQua == -1) {
        printf("Ngay 1 truoc ngay 2.\n");
    } else if (ketQua == 0) {
        printf("Ngay 1 trung voi ngay 2.\n");
    } else {
        printf("Ngay 1 sau ngay 2.\n");
    }

    return 0;
}