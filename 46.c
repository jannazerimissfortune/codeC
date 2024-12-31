
#include <stdio.h>
#include <string.h>

struct NhatKy {
    int stt;
    char ngayThang[11];
    char tenLop[10];
    char tenMonHoc[100];
    char batDau[6];
    char ketThuc[6];
};

int main() {

    printf("nhập số dòng nhật ký cần nhập: ");
    int n, maxlenmonhoc =11, maxlentenlop=8;
    scanf("%d",&n);
    struct NhatKy nhatKy[100];
    int i;
    // Nhập liệu
    for(i >0;i<n;i++){

        printf("Nhap STT: ");
        scanf("%d",&nhatKy[i].stt);

        printf("Nhap ngay thang (dd/mm/yyyy): ");
        scanf("%s",&nhatKy[i].ngayThang);

        printf("Nhap ten lop: ");
        scanf("%s",&nhatKy[i].tenLop);
        getchar();

        printf("Nhap ten mon hoc: ");
        fgets(nhatKy[i].tenMonHoc, sizeof(nhatKy[i].tenMonHoc), stdin);
        nhatKy[i].tenMonHoc[strcspn(nhatKy[i].tenMonHoc, "\n")] = 0;
        // scanf("%s",&nhatKy[i].tenMonHoc);
        
        printf("Nhap gio bat dau (hh:mm): ");
        scanf("%s",&nhatKy[i].batDau);

        printf("Nhap gio ket thuc (hh:mm): ");
        scanf("%s",&nhatKy[i].ketThuc);
        getchar();
        maxlenmonhoc=(int)strlen(nhatKy[i].tenMonHoc)>maxlenmonhoc?(int)strlen(nhatKy[i].tenMonHoc):maxlenmonhoc;
        maxlentenlop=(int)strlen(nhatKy[i].tenLop)>maxlentenlop?(int)strlen(nhatKy[i].tenLop):maxlentenlop;
    }

    printf("%-*s%-*s%-*s%-*s%-*s%-*s\n", 3+3,"STT", 10+3, "Ngay thang", maxlentenlop+3, "Ten lop", maxlenmonhoc+3, "Ten mon hoc", 7+3, "Bat dau",8+3, "Ket thuc");
    for(i=0;i<n;i++){
        printf("%-*d%-*s%-*s%-*s%-*s%-*s\n", 3+3, nhatKy[i].stt,10+3, nhatKy[i].ngayThang, maxlentenlop+3, nhatKy[i].tenLop, maxlenmonhoc+3, nhatKy[i].tenMonHoc, 7+3, nhatKy[i].batDau, 8+3, nhatKy[i].ketThuc);

    }
    return 0;
}