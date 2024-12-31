#include<stdio.h>

int trangThai[5][3];
void khoiTao(){
    for(int i=0;i<5;i++){;
        for(int j=0;j<3;j++){
            trangThai[i][j]=0;
        }
    }
}
void batDenTheoHang(int hang){
    for(int j =0;j<3;j++){
        trangThai[hang][j]=1;
    }
}
void tatDenTheoHang(int hang){
    for(int j =0;j<3;j++){
        trangThai[hang][j]=1;
    }
}
void batDenTheoCot(int cot){
    for(int i=0;i<5;i++){
        trangThai[i][cot]=1;
    }
}
void tatDenTheoCot(int cot){
    for(int i=0;i<5;i++){
        trangThai[i][cot]=0;
    }
}
void batDenTheoVitri(int hang, int cot){
    trangThai[hang][cot]=1;
}
void tatDenTheoVitri(int hang, int cot){
    trangThai[hang][cot]=0;
}
int congSuatHienTai(){
    int congSuat=0;
    for(int i=0; i<5;i++){
        for(int j=0;j<3;j++){
            if(i%2==1&&j%2==1&&trangThai[i][j]==1){
                congSuat+=10;
            }
            else if(i%2==0;j%2==0&&trangThai[i][j]==1) congSuat+=20;
            else if(trangThai[i][j]==1)congSuat+=15;
        }
    }
    return congSuat;
}
int main(){
    khoiTao();
    int lc;
    while(1){
        printf("menu:\n"
        "1.bat tat den theo hang.\n"
        "2.bat tat den theo cot.\n"
        "3.bat tat den theo vi tri.\n"
        "4.cong suat tieu thu hien tai.\n"
        "_________________________________\n"
        "moi nhap lc: ");
        scanf("%d",&lc);
        if(lc==1){
            int c;
            printf("1.bat den\n"
            "2.tatden\n");
            scanf("%d",&c);
            printf("nhap so hang tu 0 den 2: ");
            int hang;
            scanf("%d",&hang);
            if(c==1)batDenTheoHang(hang);
            else tatDenTheoHang(hang);
        }
        else if(lc==2){
            int c;
            printf("1.bat den\n"
            "2.tatden\n");
            scanf("%d",&c);
            printf("nhap so cot tu 0 den 4: ");
            int cot;
            scanf("%d",&cot);
            if(c==1)batDenTheoCot(cot);
            else tatDenTheoCot(cot);
        }
        else if(lc==3){
             int c;
            printf("1.bat den\n"
            "2.tatden\n");
            scanf("%d",&c);
            printf("nhập số hàng và số cột của đèn cần bật cách nhau bởi dấu cách: ");
            int hang;
            int cot;
            scanf("%d %d",&hang,&cot);
            if(c==1)batDenTheoVitri(hang,cot);
            else tatDenTheoVitri(hang,cot);
        }
        else if(lc==4){
            printf("công suat hiện tại là: %d\n",congSuatHienTai());
        }
        else break;
    }
    return 0;
}