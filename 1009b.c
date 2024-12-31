#include<stdio.h>
void nhap_matrix(int matrix[][100], int n,int m){
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}
void in_ma_tran(int matrix[][100], int n,int m){
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void cong_ma_tran(int a[][100], int b[][100], int c[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void tru_ma_tran(int a[][100], int b[][100], int c[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

void nhan_ma_tran(int a[][100], int b[][100], int c[][100], int m, int n, int p) {
    // Điều kiện để nhân hai ma trận: số cột của ma trận A phải bằng số hàng của ma trận B
    if (n != p) {
        printf("Khong the nhan hai ma tran vi so cot cua ma tran A khac so hang cua ma tran B.\n");
        return;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int n, choice;
    int a[100][100], b[100][100], c[100][100];

    printf("Nhap kich thuoc ma tran (n): ");
    scanf("%d", &n);

    printf("Nhap ma tran A:\n");
    nhap_matrix(a, n, n );

    printf("Nhap ma tran B:\n");
    nhap_matrix(b, n, n);

    do {
        printf("\nMenu:\n");
        printf("1. Cong hai ma tran\n");
        printf("2. Tru hai ma tran\n");
        printf("3. Nhan hai ma tran\n");
        printf("4. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                cong_ma_tran(a, b, c, n, n);
                printf("Ma tran ket qua (A + B):\n");
                in_ma_tran(c, n,n);
                break;
            case 2:
                tru_ma_tran(a, b, c,n,n);
                printf("Ma tran ket qua (A - B):\n");
                in_ma_tran(c, n,n);
                break;
            case 3:
                nhan_ma_tran(a, b, c, n,n,n);
                printf("Ma tran ket qua (A * B):\n");
                in_ma_tran(c, n,n);
                break;
            case 4:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (choice != 4);

    return 0;
}