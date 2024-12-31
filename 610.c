#include<stdio.h>
#include<string.h>

// Định nghĩa hằng số
const int GIA_VE_CHU_NHAT = 10;
const int GIA_VE_NGAY_KHAC = 7;
const float GIAM_GIA_TRE_EM = 0.5;

int main(){
    printf("ten phim: ");
    char ten_phim[100];
    scanf("%s",ten_phim);
    printf("so luong ve:");
    int so_luong_ve;
    scanf("%d",&so_luong_ve);
    printf("Loại vé (Nhap1- Tre em, khac-Nguoi lon): ");
    int loai_ve;
    scanf("%d",&loai_ve);
    printf("Ngay xem (Nhap 1- Chu nhat, Khac-Ngay thuong: )");
    int ngay_xem;
    scanf("%d",&ngay_xem);
    printf("\n\n\nThong tin ve:\n");
    printf("- Ten phim: %s\n",ten_phim);
    if(ngay_xem == 1){
        printf("- Ngay xem: Chu nhat\n");
    }
    else printf("- Ngay xem: ngay thuong\n");
    printf("- So luong ve: %d\n",so_luong_ve);
    float so_tien_thanh_toan;

    if(ngay_xem==1&&loai_ve==1){
        so_tien_thanh_toan =GIA_VE_CHU_NHAT*so_luong_ve*GIAM_GIA_TRE_EM;
    }
    else if(ngay_xem!=1&&loai_ve==1){
        so_tien_thanh_toan =GIA_VE_NGAY_KHAC*so_luong_ve*GIAM_GIA_TRE_EM;
    }
    else if(ngay_xem=1&&loai_ve!=1){
        so_tien_thanh_toan =GIA_VE_CHU_NHAT*so_luong_ve;
    }
    else so_tien_thanh_toan=GIA_VE_NGAY_KHAC*so_luong_ve;

    int SO_TIEN_THANH_TOAN=(int)so_tien_thanh_toan;
    printf("so tien thanh toan %d",SO_TIEN_THANH_TOAN);
    return 0;
}