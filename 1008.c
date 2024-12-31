#include <stdio.h>

#define SO_MAY 50
#define DIEN_NANG_MOI_LAN 400 // Watt
#define DON_GIA_DIEN 750 // VND/kWh

int trang_thai[SO_MAY];
int dien_nang[SO_MAY];

void khoi_tao() {
    for (int i = 0; i < SO_MAY; i++) {
        trang_thai[i] = 0;
        dien_nang[i] = 0;
    }
}

void dung_may(int so_hieu) {
    if (trang_thai[so_hieu - 1] == 0) {
        trang_thai[so_hieu - 1] = 1;
        dien_nang[so_hieu - 1] += DIEN_NANG_MOI_LAN;
        printf("Cấp máy %d thành công.\n", so_hieu);
    } else {
        printf("Máy %d đang được sử dụng.\n", so_hieu);
    }
}

void roi_may(int so_hieu) {
    if (trang_thai[so_hieu - 1] == 1) {
        trang_thai[so_hieu - 1] = 0;
        printf("Trả máy %d thành công.\n", so_hieu);
    } else {
        printf("Máy %d đang rỗi.\n", so_hieu);
    }
}

void in_trang_thai() {
    printf("Trạng thái các máy:\n");
    for (int i = 0; i < SO_MAY; i++) {
        printf("Máy %d: %s\n", i + 1, trang_thai[i] == 1 ? "Đang sử dụng" : "Rỗi");
    }
}

int tinh_tong_dien_nang() {
    int tong = 0;
    for (int i = 0; i < SO_MAY; i++) {
        tong += dien_nang[i];
    }
    return tong;
}

void tim_may_dung_nhieu_nhat_it_nhat() {
    int max_dien_nang = 0, min_dien_nang = dien_nang[0];
    int max_index = 0, min_index = 0;
    for (int i = 1; i < SO_MAY; i++) {
        if (dien_nang[i] > max_dien_nang) {
            max_dien_nang = dien_nang[i];
            max_index = i;
        }
        if (dien_nang[i] < min_dien_nang) {
            min_dien_nang = dien_nang[i];
            min_index = i;
        }
    }
    printf("Máy dùng nhiều nhất: %d (%.2f kWh)\n", max_index + 1, (double)max_dien_nang / 1000);
    printf("Máy dùng ít nhất: %d (%.2f kWh)\n", min_index + 1, (double)min_dien_nang / 1000);
}

int main() {
    khoi_tao();

    int lua_chon, so_hieu;
    do {
        printf("\nMenu:\n");
        printf("1. Dùng máy\n");
        printf("2. Rời máy\n");
        printf("3. In trạng thái các máy\n");
        printf("4. In tổng điện năng tiêu thụ\n");
        printf("5. In máy dùng nhiều nhất và ít nhất\n");
        printf("0. Thoát\n");
        printf("Nhap lua chon: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1:
                printf("Nhap so hieu may: ");
                scanf("%d", &so_hieu);
                dung_may(so_hieu);
                break;
            case 2:
                printf("Nhap so hieu may: ");
                scanf("%d", &so_hieu);
                roi_may(so_hieu);
                break;
            case 3:
                in_trang_thai();
                break;
            case 4:
                printf("Tong dien nang tieu thu: %.2f kWh\n", (double)tinh_tong_dien_nang() / 1000);
                printf("Tong tien dien: %.2f VND\n", (double)tinh_tong_dien_nang() / 1000 * DON_GIA_DIEN);
                break;
            case 5:
                tim_may_dung_nhieu_nhat_it_nhat();
                break;
            case 0:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (lua_chon != 0);

    return 0;
}