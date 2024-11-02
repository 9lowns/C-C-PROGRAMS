#include <stdio.h>

int main() {
    int num;
    int greatest = 0; // Initialize greatest to 0

    do {
        printf("Input a Number: ");
        scanf("%d", &num);

        if (num > greatest) { // Check if num is greater than greatest
            greatest = num; // Update greatest if num is greater
        }
    } while (num != 0);

    printf("\nThe Greatest number entered is: %d\n", greatest);

    return 0;
}
