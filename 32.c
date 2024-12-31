#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct ngaythangnam {
    char ngay[20];
    char thang[20];
    char nam[20];
};
typedef struct ngaythangnam ntn;
int main() {
    printf("nhap. ngay' thang' nam");
    ntn a;
    scanf("%s", a.ngay);
    scanf("%s", a.thang);
    scanf("%s", a.nam);
    printf("%s//%s//%s\n",a.ngay, a.thang, a.nam);
    return 0;
}
