#include<stdio.h>
int tong(int n){
    if(n==1) return 1;
    else{
        return n+tong(n-1);
    }
}
int main(){
    int n;
    printf("Nhập số tự nhiên n ");
    scanf("%d",&n);
    printf("tổng các số tự nhiên từ 1 đến n là : %d",tong(n));
    return 0;
}