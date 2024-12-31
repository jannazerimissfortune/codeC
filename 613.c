#include<stdio.h>

int main() {
    char loaiThe;
    int soNgayNamVien, tienThuoc, tienPhauThuat = 0;
    float tongTien, tienPhaiTra;

    // Nhập thông tin bệnh nhân
    printf("Nhap loai the bao hiem (G, S, C): ");
    scanf(" %c", &loaiThe);
    printf("Nhap so ngay nam vien: ");
    scanf("%d", &soNgayNamVien);
    printf("Nhap tien thuoc: ");
    scanf("%d", &tienThuoc);
    printf("Co phau thuat khong? (1: co, 0: khong): ");
    scanf("%d", &tienPhauThuat);

    // Tính toán tổng tiền
    tongTien = soNgayNamVien * 150000 + tienThuoc + tienPhauThuat;

    // Tính tiền phải trả dựa trên loại thẻ
    switch (loaiThe) {
        case 'G':
            tienPhaiTra = tongTien * 0.3;
            break;
        case 'S':
            tienPhaiTra = tongTien * 0.5;
            break;
        case 'C':
            tienPhaiTra = tongTien * 0.7;
            break;
        default:
            printf("Loai the khong hop le!\n");
            return 1;
    }

    // In hóa đơn
    printf("\nHoá đơn thanh toán\n");
    printf("--------------------\n");
    printf("So ngay nam vien: %d ngay\n", soNgayNamVien);
    printf("Tien phong troi: %.2f VND\n", soNgayNamVien * 150000.0);
    printf("Tien thuoc: %.2f VND\n", (float)tienThuoc);
    printf("Tien phau thuat: %.2f VND\n", (float)tienPhauThuat);
    printf("Tong cong: %.2f VND\n", tongTien);
    printf("Ban phai tra: %.2f VND\n", tienPhaiTra);

    return 0;
}