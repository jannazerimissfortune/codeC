#include <stdio.h>

int main() {
    char tenKhachHang[50];
    double soTienGui, laiSuatHangThang, tienLai, soDu = 0;
    int soThangGui;

    // Nhập thông tin từ người dùng
    printf("Nhap ten khach hang: ");
    fgets(tenKhachHang, 50, stdin);

    printf("Nhap so tien gui (VND): ");
    scanf("%lf", &soTienGui);

    printf("Nhap lai suat hang thang (%): ");
    scanf("%lf", &laiSuatHangThang);

    printf("Nhap so thang gui: ");
    scanf("%d", &soThangGui);

    laiSuatHangThang /= 100; // Chuyển lãi suất về dạng thập phân

    // In tiêu đề bảng
    printf("\ntài khoản khách hàng: %s\n",tenKhachHang);
    printf("Tháng\tTien đầu kỳ\tTiền lãi\tSố dư\n");
    // Tính toán và in kết quả
    int m=soTienGui;
    for (int thang = 1; thang <= soThangGui; thang++) {
        tienLai = soTienGui * laiSuatHangThang;
        soDu = soTienGui+tienLai;

        printf("%4d\t%10.2lf\t%8.2lf\t%10.2lf\n", thang, soTienGui, tienLai, soDu);

        soTienGui = soDu; // Cập nhật số tiền gửi cho tháng tiếp theo
    }

    printf("\nTong lai sau %d thang: %.2lf VND\n", soThangGui,soTienGui-m );

    return 0;
}