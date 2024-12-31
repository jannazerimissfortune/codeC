#include<stdio.h>

 float tinh_e(float epsilon){
    if(epsilon>=1) return 0;
    else{
        int n=1;
        int giai_thua=1;
        float e=1;
        do{
            giai_thua*=n;
            e+=1.0/giai_thua;
            n++;
        } while(1.0/giai_thua>=epsilon);
        return e;
    }
 }
 int main(){
    float epsilon;
    printf("nhập số epsilon: ");
    scanf("%f",&epsilon);
    if(tinh_e(epsilon)==0) printf("số epsilon không hợp lệ\n");
    else  printf("số e cần tính là: %f\n",tinh_e(epsilon));
    return 0;
 }