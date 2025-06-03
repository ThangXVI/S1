#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhap a = ");
    scanf("%f", &a);

    printf("Nhap b = ");
    scanf("%f", &b);

    printf("Nhap c = ");
    scanf("%f", &c);

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) {
        printf("Ba canh tao thanh 1 tam giac\n");
    } else {
        printf("Ba canh khong tao thanh 1 tam giac\n");
    }

    return 0;
}

