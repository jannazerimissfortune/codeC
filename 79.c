#include<stdio.h>

float tong_GID(int n){
    float s=1;
    for(int i=2;i<=n;i++){
        s+=1.0/i;
    }
    return s;
}
int main(){
    int n;
    printf("Nhập số tự nhiên n ");
    scanf("%d",&n);
    printf("tổng GID các số tự nhiên từ 1 đến n là : %f\n",tong_GID(n));
    return 0;
}