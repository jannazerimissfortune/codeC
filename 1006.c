#include <stdio.h>

int so_sanh_mang(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; // Có ít nhất một phần tử khác nhau
        }
    }
    return 1; // Tất cả các phần tử đều bằng nhau
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua moi mang: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Nhap cac phan tu cua mang thu nhat:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Nhap cac phan tu cua mang thu hai:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int ket_qua = so_sanh_mang(arr1, arr2, n);

    if (ket_qua == 1) {
        printf("Hai mang bang nhau\n");
    } else {
        printf("Hai mang khac nhau\n");
    }

    return 0;
}