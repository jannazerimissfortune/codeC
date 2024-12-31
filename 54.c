    #include <stdio.h>

    int main() {
        int soDien;
        float tienDien;

        printf("Nhap so dien tieu thu trong thang: ");
        scanf("%d", &soDien);

        // Sử dụng biểu thức điều kiện ?: để tính tiền điện
        tienDien = soDien <= 50 ? soDien * 500 :
                soDien <= 100 ? 50 * 500 + (soDien - 50) * 1000 :
                soDien <= 150 ? 50 * 500 + 50 * 1000 + (soDien - 100) * 1200 :
                soDien <= 200 ? 50 * 500 + 50 * 1000 + 50 * 1200 + (soDien - 150) * 1600 : -1;

        if (tienDien == -1) {
            printf("So dien tieu thu qua cao!\n");
        } else {
            printf("So dien tieu thu trong thang la: %d\n", soDien);
            printf("So tien phai tra la: %.2f\n", tienDien);
        }

        return 0;
    }