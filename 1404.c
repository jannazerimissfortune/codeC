#include<stdio.h>
#include<string.h>
#define MAX_NAME_LENGTH 20
#define MAX_CODE_LENGTH 8
#define MAX_STUDENTS 10

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

struct thiSinh {
    char ten[MAX_NAME_LENGTH];
    char maSo[MAX_CODE_LENGTH];
    int soPhach;
};

typedef struct thiSinh thiSinh;
struct ketQua {
    int soPhach;
    float diem;
};
typedef struct ketQua ketQua;

void selectionSortThiSinh(thiSinh thisinh[],int n){
    for(int i=0;i<n;i++){
        int minPos=i;
        for(int j=i+1;j<n;j++){
            if(thisinh[j].soPhach<thisinh[minPos].soPhach){
                minPos=j;
            }
        }
        thiSinh temp=thisinh[minPos];
        thisinh[minPos]=thisinh[i];
        thisinh[i]=temp;

    }
}

void selectionSortKetQua(ketQua ketqua[],int n){
    for(int i=0;i<n;i++){
        int minPos=i;
        for(int j=i+1;j<n;j++){
            if(ketqua[j].soPhach<ketqua[minPos].soPhach){
                minPos=j;
            }
        }
        ketQua temp=ketqua[minPos];
        ketqua[minPos]=ketqua[i];
        ketqua[i]=temp;

    }
}
int main(){
    thiSinh thisinh[10];
    ketQua ketqua[10];
    int n;

    int mlstt=3,mlmathisinh=11,mlten=9,mldiem=4;


    do{
        printf("nhập số thí sinh nhỏ hơn hoặc bằng 10: ");
        scanf("%d",&n);
    } while(n>10||n<0);
    
    for(int i=0;i<n;i++){
        getchar();
        printf("Nhap ten hoc sinh: ");
        fgets(thisinh[i].ten, 20, stdin);
        thisinh[i].ten[strcspn(thisinh[i].ten, "\n")] = 0;
        printf("Nhap ma so hoc sinh: ");
        fgets(thisinh[i].maSo, 8, stdin);
        thisinh[i].maSo[strcspn(thisinh[i].maSo, "\n")] = 0;
        printf("nhap so phach hoc sinh: ");
        scanf("%d",&thisinh[i].soPhach);
        
        mlstt = demChuSo(i) > mlstt? demChuSo(i) : mlstt;
        mlmathisinh = (int)strlen(thisinh[i].maSo) > mlmathisinh ? (int)strlen(thisinh[i].maSo) : mlmathisinh;
        mlten = (int)strlen(thisinh[i].ten) > mlten ? (int)strlen(thisinh[i].ten) : mlten;
        
    }
    for(int i=0;i<n;i++){
        printf("nhap so phach bai thi: ");
        scanf("%d",&ketqua[i].soPhach);
        printf("nhap diem: ");
        scanf("%f",&ketqua[i].diem);
        mldiem = demKyTuSoThuc(ketqua[i].diem) > mldiem ? demKyTuSoThuc(ketqua[i].diem) : mldiem;
        
    }
    selectionSortThiSinh(thisinh,n);
    selectionSortKetQua(ketqua,n);
    // in
    char str1[100]="";
    char str2[100]="";
    char str3[100]="";
    char str4[100]="";
    char str5[100]="";
    memset(str1,'-',mlstt+2);
    memset(str2,'-',mlmathisinh+2);
    memset(str3,'-',mlten+2);
    memset(str4,'-',mldiem+2);
    printf("+%s+%s+%s+%s+\n",str1,str2,str3,str4);
    printf("| %-*s| %-*s| %-*s| %-*s|\n",mlstt+1,"STT",mlmathisinh+1,"Ma Thi Sinh",mlten+1,"Ho va Ten",mldiem+1,"Diem");
    printf("+%s+%s+%s+%s+\n",str1,str2,str3,str4);
    for(int i=0;i<n;i++){
        printf("| %-*d| %-*s| %-*s| %-*f|\n",mlstt+1, i,mlmathisinh+1, thisinh[i].maSo,mlten+1, thisinh[i].ten,mldiem+1,ketqua[i].diem);
        printf("+%s+%s+%s+%s+\n",str1,str2,str3,str4);
    }
}