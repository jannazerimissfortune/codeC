#include<stdio.h>

float tinhe(float epsilon){
    if(epsilon<0||epsilon>=1){
        return 0;
    }
    else{
        float e=1.0;
        int giathua=1;
        int n =1;
        while(1.0/giathua>=epsilon){
            giathua*=n;
            e+=1.0/giathua;
            n++;
        }
        return e;
    }
}
int main(){
    float epsilon;
    do{
        printf("nhập số epsilon lớn hơn 0 nhỏ hơn 1: ");
        scanf("%f",&epsilon);
    }
    while(tinhe(epsilon)==0);

    printf("số e là: %f",tinhe(epsilon));
    return 0;
}
