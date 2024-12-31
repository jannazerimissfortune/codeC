#include<stdio.h>
#include<math.h>

int main(){
    int a;
    int b;
    printf("nhap. vao' 2 so' nguyen\n");
    scanf("%d%d", &a, &b);
    printf("phep' cong. la' %d\n", a+b);
    printf("phep' tru' la' %d\n", a-b);
    printf("phep' nhan la' %d\n", a*b);
    printf("phep' chia la' %f\n",(float)a/b);
    return 0;
}