#include <stdio.h>
#include <string.h>

#define MAX_SV 100 // Số lượng sinh viên tối đa
#define MAX_LEN 50  // Độ dài tối đa của một trường

struct SinhVien {
    char ten[MAX_LEN];
    char queQuan[MAX_LEN];
    int namSinh;
};

int main() {
    struct SinhVien sv[MAX_SV];
    int n, maxLenTen = 0, maxLenQueQuan = 0;

    // Nhập số lượng sinh viên
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar(); // Loại bỏ ký tự '\n'

    // Nhập thông tin sinh viên
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ten: ");
        fgets(sv[i].ten, MAX_LEN, stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = 0;

        printf("Que quan: ");
        fgets(sv[i].queQuan, MAX_LEN, stdin);
        sv[i].queQuan[strcspn(sv[i].queQuan, "\n")] = 0;

        printf("Nam sinh: ");
        scanf("%d", &sv[i].namSinh);
        getchar();

        // Tính độ dài tối đa của từng cột
        maxLenTen = (int)strlen(sv[i].ten) > maxLenTen ? (int)strlen(sv[i].ten) : maxLenTen;
        maxLenQueQuan = (int)strlen(sv[i].queQuan) > maxLenQueQuan ? (int)strlen(sv[i].queQuan) : maxLenQueQuan;
    }
    // in bảng
    char str1[MAX_LEN]="";
    char str2[MAX_LEN]="";
    memset(str1,'-',maxLenTen+1);
    memset(str2,'-',maxLenQueQuan+1);
    printf("\nBang thong tin sinh vien:\n");
    printf("*-%s*-%s*----------*\n",str1,str2);
    printf("| %-*s | %-*s | Nam sinh |\n", maxLenTen, "Ho ten", maxLenQueQuan, "Que quan");
    
    printf("*-%s*-%s*----------*\n",str1,str2);
   
    for (int i = 0; i < n; i++) {
        printf("| %-*s | %-*s | %8d |\n", maxLenTen, sv[i].ten, maxLenQueQuan, sv[i].queQuan, sv[i].namSinh);
        printf("*-%s*-%s*----------*\n",str1,str2);
    }
    // printf("*-%s*-%s*----------*\n",str1,str2);

    return 0;
}