#include<stdio.h>

float pi(float epsilon){
    float pi =1.0;
    int i=1;
    float dau=-1;
    while(1.0/(2*i+1)>=epsilon){
        pi+= dau*1.0/(2*i+1);
        i++;
        dau= -dau;
    }
    return pi*4.0;
}
int main(){
    float epsilon;
    printf("nhập epsilon: ");
    scanf("%f",&epsilon);
    printf("số pi với sai số epsilon là: %f\n",pi(epsilon));
    return 0;
}