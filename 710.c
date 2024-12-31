#include<stdio.h>
#include<math.h>


int kiem_tra_so_nguyen_to(int n){
    if(n<=1) return 0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
}
int main(){
    int n;
    printf("nhập số nguyên dương n: ");
    scanf("%d",&n);
    if(kiem_tra_so_nguyen_to(n)==1) printf("n là số nguyên tố");
    else printf("n không phải số nguyên tố ");
    return 0;
}