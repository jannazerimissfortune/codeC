#include<stdio.h>
#include<math.h>
float ham_so(float x){
    float tich;
    tich =sin(x*x)/exp(x);
    return tich;
}

float tich_phan(float a,float b,float do_chinh_xac){
    float x=a;
    float tich_phan=0;
    while(x<b){
        tich_phan+=ham_so(x)*do_chinh_xac;
        x+=do_chinh_xac;
    }
    return tich_phan;
}
int main(){
    float a=0;
    float b=1;
    float do_chinh_xac =0.0001;
    printf("tích phân từ 0 đến 1 của hàm sin(x^2)/e^x với độ chính  xác 10^-4 là: %f",tich_phan(a,b,do_chinh_xac));
    return 0;

}