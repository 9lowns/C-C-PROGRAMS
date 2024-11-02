#include <stdio.h>

// pattern

int main() {
    int input;

    printf("Enter number: ");
    scanf("%d", &input);
    // control the number of rows
    for (int i = input; i >= 1; i--) {
        // controls the number of asterisks in each row
        for (int x = input - i; x > 1; x--) {
            printf("*");
        }
        // Print an asterisk at the end of each row
        printf("*\n");
    }

    return 0;
}
