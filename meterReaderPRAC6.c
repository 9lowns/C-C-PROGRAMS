#include <stdio.h>

int main() {
    float kwh, bill = 0;

    printf("Enter the kWh: ");
    scanf("%f", &kwh);

    if (kwh <= 100) {
        bill = 150;
    } else if (kwh > 100 && kwh <= 500) {
        bill = (kwh - 100) * 0.5 + 150;
    } else {
        bill = (kwh - 500) * 0.3 + 350;
    }

    printf("The bill is: %.2f\n", bill);

    return 0;
}