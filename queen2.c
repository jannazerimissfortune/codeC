#include <stdio.h>

int demKyTuSoThuc(float num) {
    char str[20]; // Mảng ký tự để lưu chuỗi
    sprintf(str, "%.10f", num); // Chuyển đổi số thực thành chuỗi, với 10 chữ số sau dấu phẩy
    int count = 0;
    while (str[count] != '\0') { // Đếm đến khi gặp ký tự null
        count++;
    }
    return count;
}

int main() {
    float num;
    printf("Nhap so thuc: ");
    scanf("%f", &num);

    int soKyTu = demKyTuSoThuc(num);
    printf("So %f co %d ky tu.\n", num, soKyTu);

    return 0;
}