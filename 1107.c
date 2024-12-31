#include <stdio.h>

void tangLuong(int namBatDau, float luongHienTai, float* mucTang) {
    int soNamLamViec = 2024 - namBatDau; // Giả sử năm hiện tại là 2024
    int i=1;
    mucTang=1;
    if(soNamLamViec/3==0) mucTang=1;
    else{
        while (i<=soNamLamViec/3) {
        mucTang+=0.01; // Tăng lương 1%
         i++;
        }
    }
}
int main() {
    int N, namBatDau[100];
    float luongHienTai[100];
    float mucTang[100];
    float mucLuongDaTang[100];

    printf("Nhap so luong nhan vien: ");
    scanf("%d", &N);

    printf("Nhap thong tin nhan vien:\n");
    for (int i = 0; i < N; i++) {
        printf("Nhan vien %d:\n", i+1);
        printf("Nam bat dau lam viec: ");
        scanf("%d", &namBatDau[i]);
        printf("Luong hien tai: ");
        scanf("%f", &luongHienTai[i]);
    }

    
    for (int i = 0; i < N; i++) {
        tangLuong(namBatDau[i], luongHienTai[i], &mucTang[i]);
        mucLuongDaTang[i]=luongHienTai[i]*mucTang[i];
    }

    printf("\nmức lương đã đươc tăng là:\n");
    for (int i = 0; i < N; i++) {
        printf("Nhan vien %d: %.2f\n", i+1, mucLuongDaTang[i]);
    }

    return 0;
}