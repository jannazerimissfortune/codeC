#include<stdio.h>

float pi(float epsilon){
    if(epsilon<0||epsilon>=1){
        return 0;
    }
    else{
        float pi=1.0;
        int i=1;
        int dau=-1;
        while(1.0/(2*i+1)>=epsilon){
            pi+=dau*1.0/(2*i+1);
            i++;
            dau=-dau;
        }
        return pi*4;
    }
}
int main(){
    float epsilon;
    do{
        printf("nhập số epsilon lớn hơn 0 nhỏ hơn 1: ");
        scanf("%f",&epsilon);
    }
    while(pi(epsilon)==0);

    printf("số e là: %f",pi(epsilon));
    return 0;
}
