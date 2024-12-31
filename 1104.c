#include <stdio.h>

int main() {
    int arr[10], n;

    // Nhập số lượng phần tử của mảng
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Khai báo con trỏ và cho nó trỏ đến phần tử cuối của mảng
    int *ptr = &arr[n - 1];

    // Duyệt mảng theo thứ tự ngược và in các phần tử
    printf("Mang theo thu tu dao nguoc: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--;
    }

    return 0;
}