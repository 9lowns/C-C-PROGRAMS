#include <stdio.h>

int main() {
    char package;
    float totalcost,gallons;

    printf("Enter the package (A, B, C): ");
    scanf(" %c", &package);

    printf("Enter the number of gallons consumed: ");
    scanf("%f", &gallons);

    if (package == 'A') {
        totalcost = 250.0 + 0.002 * gallons;
    } else if (package == 'B') {
        if (gallons <= 4000000) {
            totalcost = 5000.0;
        } else {
            totalcost = 5000.0 + (gallons - 4000000) * 0.002;
        }
    } else if (package == 'C') {
        if (gallons <= 4000000) {
            totalcost = 8000.0;
        } else if (gallons <= 10000000) {
            totalcost = 14000.0;
        } else {
            totalcost = 18000.0;
        }
    } else {
        totalcost = -1.0;
    }

    if (totalcost >= 0.0) {
        printf("Total cost = P%.2f\n", totalcost);
    }

    return 0;
}