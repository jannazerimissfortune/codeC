#include <stdio.h>

int main() {
    int trauDung, trauNam, trauGia;
    for(trauDung=0;trauDung<=20;trauDung++){
        for(trauNam=0;trauNam<=33;trauNam++){
            for(trauGia=0;trauGia<=100-trauDung-trauNam;trauGia++){
                if(trauDung+trauNam+trauGia==100&& trauDung*5+trauNam*3+trauGia/3==100.0&&trauGia%3==0){
                    printf("Trâu đứng: %d\n", trauDung);
                    printf("Trâu nằm: %d\n", trauNam);
                    printf("Trâu già: %d\n\n", trauGia);
                }
            }
        }
    }
    return 0;
}