#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct sinhvien{
    char ma[20];
    char ten[50];
    double gpa;
    char lop[20];

};
typedef struct sinhvien SV;

int main(){
    printf("nhập thông tin sinh viên");
    SV a;
    scanf("%s", a.ma);
    getchar();
    gets(a.ten);
    scanf("%lf%s", &a.gpa, a.lop);
    printf("%s %s %.2f %s\n", a.ma, a.ten, a.gpa, a.lop);
    
}
