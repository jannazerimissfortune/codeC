#include <stdio.h>

int main() {
    int namSinh, namHienTai, tuoi;

    // Nhập năm hiện tại (bạn có thể thay đổi giá trị này)
    printf("Nhập năm hiện tại: ");
    scanf("%d", &namHienTai);

    // Nhập năm sinh
    printf("Nhập năm sinh của bạn: ");
    scanf("%d", &namSinh);

    // Tính tuổi
    tuoi = namHienTai - namSinh;

    // Kiểm tra tuổi và đưa ra nhận xét
    if (tuoi < 0) {
        printf("Năm sinh không hợp lệ!\n");
    } else if (tuoi < 6) {
        printf("Bạn đang ở độ tuổi trẻ em.\n");
    } else if (tuoi < 11) {
        printf("Bạn đang ở độ tuổi học sinh cấp 1.\n");
    } else if (tuoi < 15) {
        printf("Bạn đang ở độ tuổi học sinh cấp 2.\n");
    } else if (tuoi < 18) {
        printf("Bạn đang ở độ tuổi học sinh cấp 3.\n");
    } else if (tuoi < 40) {
        printf("Bạn đang ở độ tuổi thanh niên.\n");
    } else if (tuoi < 60) {
        printf("Bạn đang ở độ tuổi trung niên.\n");
    } else {
        printf("Bạn đã ở độ tuổi người cao tuổi.\n");
    }

    return 0;
}