#include<stdio.h>
int main(){
    int a = 300;
    int *ptr;
    ptr= &a;
    printf("%d ", *ptr);
    return 0;


}

//pass-by-reference
//pass-by-value
//calloc
//dataType *pointerName = (type_cast*)nalloc(size_of_byte);