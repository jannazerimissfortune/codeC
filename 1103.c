#include <stdio.h>

int main() {
    int x, y, z;
    int *p, *q, *r;

    // Gán giá trị cho các biến
    x = 10;
    y = 20;
    z = 30;

    // Cho các con trỏ trỏ tới các biến
    p = &x;
    q = &y;
    r = &z;

    // In giá trị ban đầu
    printf("Giá trị ban đầu:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", p, q, r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    // Tráo đổi giá trị của x, y, z
    int temp = x;
    x = y;
    y = z;
    z = temp;

    // In giá trị sau khi tráo đổi x, y, z
    printf("\nSau khi tráo đổi x, y, z:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", p, q, r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    // Tráo đổi giá trị của p, q, r
    int *tempPtr = p;
    p = q;
    q = r;
    r = tempPtr;

    // In giá trị sau khi tráo đổi p, q, r
    printf("\nSau khi tráo đổi p, q, r:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", p, q, r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    return 0;
}