#include <stdio.h>
#include <string.h>
void tach_ten(char hoTen[]){
    int index = strrchr(hoTen, ' ') - hoTen;
    char ten[20];
    

}

int main() {
    char hoTen[100];

    printf("Nhap ho va ten: ");
    fgets(hoTen, 100, stdin);

    // Loại bỏ ký tự '\n' nếu có (fgets bao gồm cả ký tự xuống dòng)
    hoTen[strcspn(hoTen, "\n")] = '\0';

    // Tìm vị trí của khoảng trắng cuối cùng
    int index = strrchr(hoTen, ' ') - hoTen;

    // In phần tên
    printf("Ten: %s\n", hoTen + index + 1);

    return 0;
}