#include <stdio.h>

int main() {
    int num;
    do {
        printf("Enter size (should be 50 or less): ");
        scanf("%d", &num);

        if (num > 50) {
            printf("Number must be 50 or less!\n");
        }
    } while (num > 50);

    // Display the numbers
    for (int i = 0; i < num; i++) {
        printf("%d ", i);

        // Print a newline after every 10 numbers
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
