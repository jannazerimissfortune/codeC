#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int diem[11], x,y;

void khoitao(){
    for (int i=0;i<11;i++){
    diem[i]=0;
    }
    srand(time(NULL));
}

void lacSucSac(){
    x = rand() % 6 + 1;
    y = rand() % 6 + 1;
    diem[x+y-2]++;
}

int main(){
    khoitao();
    for(int i=0;i<100;i++){
        lacSucSac();
    }
    printf("Kết quả thống kê sau 100 lần tung:\n");
    for (int i = 2; i <= 12; i++) {
        printf("Tổng điểm %d xuất hiện %d lần\n", i, diem[i - 2]);
    }
    return 0;
}