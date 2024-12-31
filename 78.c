#include<stdio.h>
int tong_chan(int n){
    int tong =0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            tong+=i;
        }
    }
    return tong;
}
int tong_le(int n){
    if(n==1) return 1;
    else if(n%2!=0){
        return n+ tong_le(n-1);
    }
    else{
        return tong_le(n-1);
    }
}

int main(){
    int n;
    printf("Nhập số tự nhiên n: ");
    scanf("%d",&n);
    printf("tổng các chẵn các số tự nhiên từ 1 đến n là : %d\n",tong_chan(n));
     printf("tổng các lẻ các số tự nhiên từ 1 đến n là : %d\n",tong_le(n));
    return 0;
}