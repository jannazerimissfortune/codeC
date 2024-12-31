#include<stdio.h>
#include<math.h>
int kiemtra(int z, int y){
    if(z==y) return 1;
    else return 0;
}

int main(){
    int* ptr;
    int x;

    ptr = &x;
    scanf("%d", &ptr);
    printf("%d\n", ptr);
    if(ptr==&x) return 1;
    else return 0;


    return 0;
}