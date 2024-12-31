#include<stdio.h>
int tongN(int n){
    if(n<=10||n>=100){
        return 0;
    }
    else{
        if(n ==11) return 11;
        else{
            return n+tongN(n-1);
        }
    }
}
int main(){
    #include<stdio.h>
int tongN(int n){
    if(n<=10||n>=100){
        return 0;
    }
    else{
        if(n ==11) return 11;
        else{
            return n+tongN(n-1);
        }
    }
}
int main(){
    int n;
    do{
        printf("nhập n lớn hơn 10 nhỏ hơn 100: ");
        scanf("%d",&n);
    }
    while(tongN(n)==0);

    printf("tổng các chữ số từ 1 đến n là: %d",tongN(n));
    return 0;
}
}