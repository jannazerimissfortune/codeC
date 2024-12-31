#include <stdio.h>

int main() {
    int i, donvi, chuc, tram, dem = 0;

    printf("Cac so thoa man dieu kien la:\n");

    for (i = 0; i < 1000; i++) {
        donvi = i % 10;
        chuc = (i / 10) % 10;
        tram = i / 100;

        if (donvi + tram == chuc && i % 3 == 0) {
            printf("%d ", i);
            dem++;
            if (dem % 10 == 0) {
                printf("\n");
            }
        }
    }

    return 0;
}