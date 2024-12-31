#include<stdio.h>
#include<string.h>
#define MAX_HH 100

struct hanghoa{
    char tenhang[20];
    char mahang[6];
    float dongia;
    int soluongban;
    float tongtien;
};
typedef struct hanghoa hanghoa;

int demChuSo(int n) {
    int dem = 0;
    while (n != 0) {
        n /= 10;
        dem++;
    }
    return dem;
}

int demKyTuSoThuc(float num) {
    char str[100]; // Mảng ký tự để lưu chuỗi
    sprintf(str, "%.6f", num); // Chuyển đổi số thực thành chuỗi, với 10 chữ số sau dấu phẩy
    int count = 0;
    while (str[count] != '\0') { // Đếm đến khi gặp ký tự null
        count++;
    }
    return count;
}
void selectionSort(hanghoa hh[],int n){
    for(int i=0;i<n;i++){
        int minPos=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(hh[minPos].mahang, hh[j].mahang)>0){
                minPos=j;
            }
        }
        hanghoa temp=hh[minPos];
        hh[minPos]=hh[i];
        hh[i]=temp;

    }
}
int main(){
    hanghoa hh[MAX_HH];
    char str[]="***";
    int i=0;
    int maxlenstt=3;
    int maxlentenhang=12;
    int maxlenmahang=7;
    int maxlendongia=7;
    int maxlensoluong=8;
    int maxlentongtien=9;
    while(1){
        printf("nhap hang so %d: \n",i);
        printf("nhap ten hang: ");
        fgets(hh[i].tenhang, 20, stdin);
        hh[i].tenhang[strcspn(hh[i].tenhang, "\n")] = 0;

        if(strstr(hh[i].tenhang, str) != NULL) break;

        printf("nhap ma hang hoa: ");
        fgets(hh[i].mahang, 6, stdin);
        hh[i].mahang[strcspn(hh[i].mahang, "\n")] = 0;
        printf("nhap don gia: ");
        scanf("%f",&hh[i].dongia);
        printf("Nhap so luong ban: ");
        scanf("%d",&hh[i].soluongban);
        getchar();
        hh[i].tongtien=hh[i].dongia*hh[i].soluongban;

        maxlenstt = demChuSo(i) > maxlenstt ? demChuSo(i) : maxlenstt;
        maxlentenhang  = (int)strlen(hh[i].tenhang) > maxlentenhang ? (int)strlen(hh[i].tenhang) : maxlentenhang;
        maxlenmahang = (int)strlen(hh[i].mahang)>maxlenmahang?(int)strlen(hh[i].mahang):maxlenmahang;
        maxlendongia = demKyTuSoThuc(hh[i].dongia) > maxlendongia ? demKyTuSoThuc(hh[i].dongia) : maxlendongia;
        maxlensoluong=demChuSo(hh[i].soluongban)>maxlensoluong?demChuSo(hh[i].soluongban) : maxlensoluong;
        maxlentongtien = demKyTuSoThuc(hh[i].tongtien) > maxlentongtien ? demKyTuSoThuc(hh[i].tongtien) : maxlentongtien;
        i++;
    }
    int n =i;
    //sap xep
    selectionSort(hh,n);

    //in 
    float tong =0;
    int k=maxlenstt+maxlenmahang+maxlentenhang+maxlendongia+maxlensoluong+maxlentongtien+12;
    char str1[100]="";
    char str2[100]="";
    char str3[100]="";
    char str4[100]="";
    char str5[100]="";
    char str6[100]="";
    char str7[100]="";
    memset(str1,'-',maxlenstt+2);
    memset(str2,'-',maxlenmahang+2);
    memset(str3,'-',maxlentenhang+2);
    memset(str4,'-',maxlendongia+2);
    memset(str5,'-',maxlensoluong+2);
    memset(str6,'-',maxlentongtien+2);
    memset(str7,'-',k+7);
    printf("+%s+%s+%s+%s+%s+%s+\n",str1,str2,str3,str4,str5,str6);
    printf("| %-*s| %-*s| %-*s| %-*s| %-*s| %-*s|\n",maxlenstt+1,"STT",maxlenmahang+1,"Ma hang",maxlentenhang+1,"Ten hang hoa",maxlendongia+1,"Don gia",maxlensoluong+1,"So luong",maxlentongtien+1,"Tong tien");
    for(int i=0;i<n;i++){
        if(hh[i].tongtien>500000){
            printf("+%s+%s+%s+%s+%s+%s+\n",str1,str2,str3,str4,str5,str6);
            printf("| %-*d| %-*s| %-*s| %-*f| %-*d| %-*f|\n",maxlenstt+1,i,maxlenmahang+1,hh[i].mahang,maxlentenhang+1,hh[i].tenhang,maxlendongia+1,hh[i].dongia,maxlensoluong+1,hh[i].soluongban,maxlentongtien+1,hh[i].tongtien);
            tong+=hh[i].tongtien;
        }
    }
    int x= demKyTuSoThuc(tong);
    // printf("   . . . . .");
    printf("%s\n",str7);
    printf("%*s%-*f VND",k+7-x-4," TONG CONG: ",x,tong);
    return 0;
}