#include <stdio.h>

int countEven(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {2, 5, 8, 1, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int numEven = countEven(arr, size);
    printf("Số lượng số chẵn trong mảng: %d\n", numEven);

    return 0;
}