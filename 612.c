#include<stdio.h>

int main(){
    int lc;
    while(1){
        printf("CHUONG TRINH MAY TINH DIEN TU\n");
        printf("    AN Phim 1- Phep cong\n");
        printf("    AN Phim 2- Phep tru\n");
        printf("    AN Phim 3- Phep nhan\n");
        printf("    AN Phim 4- Phep chia\n");
        printf("    thoat:  an phim khac\n");
        printf("Moi ban chon phep tinh: ");
        scanf("%d",&lc);
        if(lc==1){
            int a;
            int b;
            printf("nhap 2 so hang a b cach nhau boi dau cach: ");
            scanf("%d %d",&a,&b);
            printf("ket qua phep cong la:%d\n",a+b);
        }
        else if(lc==2){
            int a;
            int b;
            printf("nhap so tru vao so bi tru cach nhau boi dau cach: ");
            scanf("%d %d",&a,&b);
            printf("ket qua phep cong la:%d\n",a-b);
        }
        else if(lc==3){
            int a;
            int b;
            printf("nhap 2 so nhan cach nhau boi dau cach: ");
            scanf("%d %d",&a,&b);
            printf("ket qua phep cong la:%d\n",a*b);
        }
        else if(lc==4){
            int a;
            int b;
            printf("nhap so chia va so bi chia cach nhau boi dau cach: ");
            scanf("%d %d",&a,&b);
            printf("ket qua phep cong la:%f\n",a/b);
        }
        else{
            printf("thoat chuong trinh");
            break;
        }
    }
    return 0;
}