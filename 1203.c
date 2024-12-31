#include<stdio.h>

void daoNguocMangBangConTro(int* arr, int size){
    int* ptr =arr;
    char temp;
    for(int i=0;i<size/2;i++){
        temp =*(ptr+i);
        *(ptr+i) =*(ptr+(size-i-1));
        *(ptr+(size-i-1)) = temp;
    }
}
void daoNguocMangBangChiSo(int arr[], int n) {
    int temp, start = 0, end = n - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int a[]={1,2,3,4,5,6};
    printf("các phần tử của mảng ban đầu: \n");
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    
    printf("\ncác phần tử được đảo ngược với con trỏ:\n");
    daoNguocMangBangConTro(a,6);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    
    printf("\ncác phần tử được đảo ngược với chỉ số:\n");
    daoNguocMangBangChiSo(a,6);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    return 0;
}