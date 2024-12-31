#include<stdio.h>

int giaiThua1(int n){
    if(n>=8||n<=0){
        return 0;
    }
    else{
        int k=1;
        int giaithua =1;
        while(k<=n&&k>0){
        giaithua*=k;
        k++;
    }
    return giaithua;
    }
}
int giaiThua2(int n){
    if(n>=8||n<=0){
        return 0;
    }
    else{
        int k=1;
        int giathua=1;
        do{
            giathua*=k;
            k++;
        }
        while(k<=n&&k>0);
        
    
    return giathua;
    }
}
int main(){
    printf("nhập số n: ");
    int n;
    scanf("%d",&n);
    if(giaiThua1(n)==0) printf("n không đúng với yêu cầu đề bài\n");
    else{
        printf("gia thua của số n nhỏ hơn 8 với vòng lặp while là: %d\n",giaiThua1(n));
    }
    if(giaiThua2(n)==0) printf("n không đúng với yêu cầu đề bài\n");
    else{
        printf("gia thua của số n nhỏ hơn 8 với vòng lặp do while là: %d\n",giaiThua2(n));
    }
    return 0;
}