#include <stdio.h>

int main() {
    float n1, n2, n3, n4, sum = 0;

    printf("Enter the 1st number: ");
    scanf("%f", &n1);
    printf("Enter the 2nd number: ");
    scanf("%f", &n2);
    printf("Enter the 3rd number: ");
    scanf("%f", &n3);
    printf("Enter the 4th number: ");
    scanf("%f", &n4);

    if (n1 > 0) {
        sum += n1;
    }
    if (n2 > 0) {
        sum += n2;
    }
    if (n3 > 0) {
        sum += n3;
    }
    if (n4 > 0) {
        sum += n4;
    }

    /* or  if (num1 > 0) sum += num1;
    if (num2 > 0) sum += num2;
    if (num3 > 0) sum += num3;
    if (num4 > 0) sum += num4;
    */

    printf("The sum of positive numbers is: %.2f\n", sum);

    return 0;
}