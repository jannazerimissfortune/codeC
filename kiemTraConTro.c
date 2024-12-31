#include <stdio.h>

int is_pointing_to(void *ptr, void *target) {
    return ptr == target;
}

int main() {
    int x = 10;
    int *ptr = &x;
    int y = 20;

    // Kiểm tra ptr có trỏ đến x không
    if (is_pointing_to(ptr, &x)) {
        printf("ptr đang trỏ đến x\n");
    } else {
        printf("ptr không trỏ đến x\n");
    }

    // Kiểm tra ptr có trỏ đến y không
    if (is_pointing_to(ptr, &y)) {
        printf("ptr đang trỏ đến y\n");
    } else {
        printf("ptr không trỏ đến y\n");
    }

    return 0;
}