#include<stdio.h>
#include <stdlib.h>
#include <time.h>

struct dauSi
{
    float nhanhNhen;
    float sucManh;
    float Mau;
};
typedef struct dauSi dauSi;
dauSi* arena(dauSi* dausi1, dauSi* dausi2){
    // dauSi chienThang =((dausi1.nhanhNhen+dausi1.sucManh+dausi1.Mau)>(dausi2.nhanhNhen+dausi2.sucManh+dausi2.Mau)) ? dausi1:dausi2;
     int x, y;
    x = rand() % 10 + 1;
    y = rand() %10 +1;
    x+=100;
    y+=100;
    if((dausi1->nhanhNhen+dausi1->sucManh+dausi1->Mau)>(dausi2->nhanhNhen+dausi2->sucManh+dausi2->Mau)){
        y += rand() %20 +1;
        dausi1->nhanhNhen=dausi1->nhanhNhen*(1.02*x*0.01);
        dausi1->sucManh=dausi1->sucManh*(1.02*x*0.01);
        dausi1->Mau=dausi1->Mau*(1.02*x*0.01);
        dausi2->nhanhNhen=dausi2->nhanhNhen*(1.01*y*0.01);
        dausi2->sucManh=dausi2->sucManh*(1.01*y*0.01);
        dausi2->Mau=dausi2->Mau*(1.01*y*0.01);
        return dausi1;
    }
    else{
        x += rand() %20 +1;
        dausi1->nhanhNhen=dausi1->nhanhNhen*(1.01*x*0.01);
        dausi1->sucManh=dausi1->sucManh*(1.01*x*0.01);
        dausi1->Mau=dausi1->Mau*(1.01*x*0.01);
        dausi2->nhanhNhen=dausi2->nhanhNhen*(1.02*y*0.01);
        dausi2->sucManh=dausi2->sucManh*(1.02*y*0.01);
        dausi2->Mau=dausi2->Mau*(1.02*y*0.01);
        return dausi2;
    }
   

}

int main(){
    srand(time(NULL));
    dauSi* dausi[3];
    for(int i = 0; i < 3; i++) {
    dausi[i] = (dauSi*)malloc(sizeof(dauSi));
    }

    for(int i=0;i<3;i++){
        dausi[i]->nhanhNhen=(rand() % 100 + 1)*1.00;
        dausi[i]->sucManh=(rand() % 100 + 1)*1.00;
        dausi[i]->Mau=(rand() % 100 + 1)*1.00;
        printf("khởi tạo sức mạnh các đấu sĩ %d:\n"
        "nhanh nhe: %f\n"
        "suc manh: %f\n"
        "mau:%f\n", i, dausi[i]->nhanhNhen,dausi[i]->sucManh,dausi[i]->Mau);
    }
    
    printf("Nhập số lần chiến đấu vòng tròn: ");
    int n;
    scanf("%d",&n);
    int khongThangMot=0,motThangHai=0,haiThangKhong=0;
    int motThangKhong=0,haiThangMot=0,khongThangHai=0;
    for(int i =0;i<n;i++){
        arena(dausi[0],dausi[1]);
        if(arena(dausi[0],dausi[1])==dausi[0]) khongThangMot+=1;
        else motThangKhong+=1;
        arena(dausi[1], dausi[2]);
        if(arena(dausi[1],dausi[2])==dausi[1]) motThangHai+=1;
        else haiThangMot+=1;
        arena(dausi[2],dausi[0]);
        if(arena(dausi[2],dausi[0])==dausi[2]) haiThangKhong+=1;
        else khongThangHai+=1;
    }
    printf("\n\n");
    for(int i=0;i<3;i++){
        printf(" sức mạnh các đấu sĩ %d:\n"
        "nhanh nhe: %f\n"
        "suc manh: %f\n"
        "mau:%f\n\n", i, dausi[i]->nhanhNhen,dausi[i]->sucManh,dausi[i]->Mau);
    }
    printf("kêt quả:\n 0 thắng 1: %d\n 1 thắng 2: %d\n 2 thắng 0: %d\n 1 thắng 0: %d\n 2 thắng 1: %d\n 0 thắng 2: %d\n",khongThangMot,motThangHai,haiThangKhong,motThangKhong,haiThangMot,khongThangHai);
    return 0;

}
