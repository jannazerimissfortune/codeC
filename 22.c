#include <stdio.h>

int main() {
    int canh = 10; // Cạnh của hình vuông và khối lập phương

    // Tính toán cho hình vuông
    int chuViHinhVuong = 4 * canh;
    int dienTichHinhVuong = canh * canh;

    // Tính toán cho khối lập phương
    int dienTichMotMat = canh * canh;
    int dienTichXungQuanh = 4 * dienTichMotMat;
    int dienTichToanPhan = 6 * dienTichMotMat;
    int theTich = canh * canh * canh;

    // In kết quả
    printf("Cạnh hình vuông: %d\n", canh);
    printf("Chu vi hình vuông: %d\n", chuViHinhVuong);
    printf("Diện tích hình vuông: %d\n", dienTichHinhVuong);

    printf("\n");

    printf("Cạnh khối lập phương: %d\n", canh);
    printf("Diện tích một mặt của khối lập phương: %d\n", dienTichMotMat);
    printf("Diện tích xung quanh của khối lập phương: %d\n", dienTichXungQuanh);
    printf("Diện tích toàn phần của khối lập phương: %d\n", dienTichToanPhan);
    printf("Thể tích của khối lập phương: %d\n", theTich);

    return 0;
}