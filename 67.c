#include<stdio.h>
#include<string.h>
 int so_ngay_trong_thang(int thang){
     if (thang < 1 || thang > 12) {
        printf("Thang khong hop le!\n");
        return 0;
    }

    // Các tháng có 31 ngày
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        printf("thang %d co 31 ngay\n",thang);
        return 1;
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) { // Các tháng có 30 ngày
        printf("thang %d co 30 ngay", thang);
        return 2;
    }
    else {
        printf("nhap nam");
        int nam;
        scanf("%d",&nam);
        if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
            printf("thang 2 nam %d co 29 ngay\n",nam);
            return 3;
        }
        else {
             printf("thang 2 nam %d co 28 ngay\n",nam);
             return 4;
        }
    }
}

int main(){
    int thang;
    printf("nhap thang ");
    scanf("%d",&thang);
    int m = so_ngay_trong_thang(thang);
    while( m == 0){
        printf("nhap thang\n");
        scanf("%d",&thang);
        m = so_ngay_trong_thang(thang);

    }
    
}
