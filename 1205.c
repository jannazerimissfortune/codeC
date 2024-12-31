#include<stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Hàm tìm phần tử gần giá trị trung bình nhất
double* findNearestToAverage(double arr[], int n) {
    double sum = 0.0;
    double avg;
    double minDiff = INFINITY;
    double *nearest = NULL;

    // Tính tổng các phần tử
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Tính giá trị trung bình
    avg = sum / n;

    // Tìm phần tử gần giá trị trung bình nhất
    for (int i = 0; i < n; i++) {
        double diff = fabs(arr[i] - avg);
        if (diff < minDiff) {
            minDiff = diff;
            nearest = &arr[i];
        }
    }

    return nearest;
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    double arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    double *result = findNearestToAverage(arr, n);

    if (result != NULL) {
        printf("Phan tu gan gia tri trung binh nhat la: %.2lf\n", *result);
    } else {
        printf("Khong tim thay phan tu thoa man\n");
    }

    return 0;
}