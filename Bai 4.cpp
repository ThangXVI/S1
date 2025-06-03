#include <stdio.h>

int main() {
    int kwh;
    float tien = 0;

    printf("Nhap so kWh tieu thu: ");
    scanf("%d", &kwh);

    if (kwh <= 0) {
        printf("So kWh khong hop le.\n");
    } else {
        if (kwh <= 50) {
            tien = kwh * 1678;
        } else if (kwh <= 100) {
            tien = 50 * 1678 + (kwh - 50) * 1734;
        } else if (kwh <= 200) {
            tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
        } else {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
        }

        printf("Tien dien phai tra: %.0f dong\n", tien);
    }

    return 0;
}

