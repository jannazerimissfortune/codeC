#include<stdio.h>
const int namHienTai=2024;
float tangLuong(int namKhoiDau,float mucLuongHienTai,float* mucLuongSauKhiTang,float* mucTang){
    
    int soNamLamViec=namHienTai-namKhoiDau;
    int a = soNamLamViec/3;
    while(a>0){
        *mucTang+=0.01;
        a--;
    }
    (*mucLuongSauKhiTang)*= (*mucTang);
    return 1.0;
}

int main(){
    int namKhoiDau[100], n;
    float mucLuongHienTai[100];
    float mucLuongSauKhiTang[100];
    float mucTang[100];
    printf("nhập số lượng nhân viên: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhan vien %d:\n", i+1);
        printf("Nam bat dau lam viec: ");
        scanf("%d", &namKhoiDau[i]);
        printf("Luong hien tai: ");
        scanf("%f", &mucLuongHienTai[i]);
        mucLuongSauKhiTang[i]=mucLuongHienTai[i];
        mucTang[i]=1;
    }
    for (int i=0; i<n;i++){
        tangLuong(namKhoiDau[i],mucLuongHienTai[i],&mucLuongSauKhiTang[i],&mucTang[i]);
        // mucTang[i]=1;
        // int soNamLamViec=namHienTai-namKhoiDau[i];
        // int a = soNamLamViec/3;
        // while(a>0){
        //     mucTang[i]+=0.01;
        //     a--;
        // }
        // mucLuongSauKhiTang[i]=mucLuongHienTai[i]*mucTang[i];
    }
    printf("\nmức lương đã đươc tăng là:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhan vien %d: %.2f\n", i+1, mucLuongSauKhiTang[i]);
    }
    return 0;

}