#include <stdio.h>

int main() {
    int so_giay, gio, phut, giay;

    // Nhập số giây từ bàn phím
    printf("Nhập số giây: ");
    scanf("%d", &so_giay);

    // Tính giờ
    gio = so_giay / 3600;
    // Tính phút
    phut = (so_giay % 3600) / 60;
    // Tính giây
    giay = so_giay % 60;

    // In kết quả theo định dạng giờ:phút:giây
    printf("%02d:%02d:%02d\n", gio, phut, giay);

    return 0;
}