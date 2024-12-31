#include <stdio.h>

int main()
{
    int x, y, z;
    for (x = 1; x < 100; x++)
        for (y = 1; y < 100; y++)
            for (z = 1; z < 100; z++) {
                if ((x + y + z == 100) && (15*x + 9*y + z == 300))
                    printf("(%d %d %d)\n", x, y, z);
            }

    return 0;
}

void tim_trau(int* trauDung, int* trauNam, int* trauGia) {
    int found = 0;
    *trauDung=2;
    while(*trauDung<20&& found==1) {
        *trauNam=0;
        for (*trauNam = 0; *trauNam < 33; (*trauNam)++) {
            *trauGia = 100 - *trauDung - *trauNam;
            if (5 * *trauDung + 3 * *trauNam + *trauGia/3 == 100 && *trauGia % 3 == 0) {
                found=1;
                break;
            }
        }
        *trauDung++;
    }
}