#include <stdio.h>

int main() {
    float base = 40.00;
    float addfee = 2.50;
    int distance = 250;
    int addDis = 200;
    int totaldis;

    printf("Enter the distance traveled (meters): ");
    scanf("%d", &totaldis);

    float totalCost = totaldis > distance ? base + ((totaldis - distance + addDis - 1) / addDis) * addfee : base;

    printf("Total cost = P%.2f\n", totalCost);

    return 0;
}
