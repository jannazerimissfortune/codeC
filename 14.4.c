#include<stdio.h>

int demSoNguyen(int n){
    dem = 0;
    while(n!=0){
        n/=10;
        dem++;
    }
    return dem;
}