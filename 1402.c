#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>

#define MAX_STUDENTS 10

int demChuSo(int n) {
    int dem = 0;
    while (n != 0) {
        n /= 10;
        dem++;
    }
    return dem;
}

int demKyTuSoThuc(float num) {
    char str[100]; // Mảng ký tự để lưu chuỗi
    sprintf(str, "%.6f", num); // Chuyển đổi số thực thành chuỗi, với 10 chữ số sau dấu phẩy
    int count = 0;
    while (str[count] != '\0') { // Đếm đến khi gặp ký tự null
        count++;
    }
    return count;
}
//tach ten
char* tach_ten(char hoTen[]) {
    // Tìm vị trí của khoảng trắng cuối cùng
    int i = strlen(hoTen) - 1;
    while (i >= 0 && hoTen[i] != ' ') {
        i--;
    }

    // Nếu tìm thấy khoảng trắng, tạo một chuỗi mới chứa phần tên và trả về
    if (i >= 0) {
        char *ten = (char*)malloc(strlen(hoTen) - i); // Cấp phát đủ bộ nhớ
        strcpy(ten, &hoTen[i+1]);
        return ten;
    } else {
        return NULL; // Không tìm thấy tên
    }
}

struct sinhvien {
    char ten[20];
    int maSo;
    float diem;
    char* Ten;
};
typedef struct sinhvien SinhVien;

int sapXepTheoDiem(SinhVien ds[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minPos=i;
        for (int j = i+1; j < n ; ++j) {
            if (ds[j].diem < ds[minPos].diem) {
               minPos =j;
            }
        }
        SinhVien temp = ds[minPos];

        ds[minPos] = ds[i];
        ds[i] = temp;
    }

    return 1;
}
void selectionSort(SinhVien hh[],int n){
    for(int i=0;i<n;i++){
        int minPos=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(hh[minPos].Ten, hh[j].Ten)>0){
                minPos=j;
            }
        }
        SinhVien temp=hh[minPos];
        hh[minPos]=hh[i];
        hh[i]=temp;

    }
}

int inDanhSach(SinhVien ds[], int n, int maxLenTen,int maxLenMaHS){
    char str1[50]="";
    char str2[50]="";
    char str3[50]="";
    char str4[50]="";
    memset(str1,'-',5);
    memset(str2,'-',maxLenMaHS+2);
    memset(str3,'-',maxLenTen+2);
    memset(str4,'-',6);

    printf("Danh sach sinh vien sau khi sap xep:\n");
    printf("+%s+%s+%s+%s+\n",str1,str2,str3,str4);
    printf("| STT | %-*s| %-*s| Diem |\n", maxLenMaHS+1,"MaHS", maxLenTen+1, "Ho va Ten");
    printf("+%s+%s+%s+%s+\n",str1,str2,str3,str4);

    for (int i = 0; i < n; ++i) {
        printf("| %-*d| %-*d| %-*s| %-*.1f|\n", 4,i, maxLenMaHS+1,ds[i].maSo, maxLenTen+1,ds[i].ten,5,ds[i].diem);
        printf("+%s+%s+%s+%s+\n",str1,str2,str3,str4);
        
    }
    return 1;
}

int main() {
    int n;
    do{

        printf("Nhap so luong sinh vien: ");
        scanf("%d", &n);
        if (n <= 0 || n > MAX_STUDENTS) {
        printf("So luong sinh vien khong hop le!\n");
        }
    } while(n <= 0 || n > MAX_STUDENTS);

    SinhVien ds[MAX_STUDENTS];
    int maxLenTen=11;
    int maxLenMaHS=4;

    for (int i = 0; i < n; ++i) {
        getchar();
        printf("Nhap thong tin sinh vien thu %d\n", i+1);
        printf("Nhap ten: ");
        fgets(ds[i].ten, 20, stdin);
        ds[i].ten[strcspn(ds[i].ten, "\n")] = 0;
        printf("Ma so: ");
        scanf("%d", &ds[i].maSo);
        printf("Diem: ");
        scanf("%f", &ds[i].diem);
        ds[i].Ten= tach_ten(ds[i].ten);
        maxLenTen = (int)strlen(ds[i].ten) > maxLenTen ? (int)strlen(ds[i].ten) : maxLenTen;
        maxLenMaHS = demChuSo(ds[i].maSo) > maxLenMaHS ? demChuSo(ds[i].maSo) : maxLenMaHS;
    }
    sapXepTheoDiem(ds, n);
    inDanhSach(ds, n,maxLenTen,maxLenMaHS);
    selectionSort(ds,n);
    inDanhSach(ds, n,maxLenTen,maxLenMaHS);
    // char str1[50]="";
    // char str2[50]="";
    // char str3[50]="";
    // char str4[50]="";
    // memset(str1,'-',5);
    // memset(str2,'-',maxLenMaHS+2);
    // memset(str3,'-',maxLenTen+2);
    // memset(str4,'-',6);

    // printf("Danh sach sinh vien sau khi sap xep:\n");
    // printf("+%s+%s+%s+%s+\n",str1,str2,str3,str4);
    // printf("| STT | %-*s| %-*s| Diem |\n", maxLenMaHS+1,"MaHS", maxLenTen+1, "Ho va Ten");

    // for (int i = 0; i < n; ++i) {
    //     printf("| %-*d| %-*d| %-*s| %-*.1f|\n", 4,i, maxLenMaHS+1,ds[i].maSo, maxLenTen+1,ds[i].ten,5,ds[i].diem);
    //     printf("+%s+%s+%s+%s+\n",str1,str2,str3,str4);
        

    // }
    return 0;
}