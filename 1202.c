#include<stdio.h>
double* maximum(double* a, int size){
    if(size==0){
        return NULL;
    }
    double *max = a;
    for(int i=0;i<size;i++){
        if(*(a+i)>*max) *max=*(a+i);
    }
    return max;
}
int main() {
    double arr[] = {3.14, 1.59, 2.65, 3.58, 9.79};
    int size = sizeof(arr) / sizeof(arr[0]);

    double* maxPtr = maximum(arr, size);

    if (maxPtr != NULL) {
        printf("Giá trị lớn nhất: %.2lf\n", *maxPtr);
    } else {
        printf("Mảng rỗng.\n");
    }

    return 0;
}