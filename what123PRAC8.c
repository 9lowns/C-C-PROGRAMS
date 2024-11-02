#include <stdio.h>

int main() {
    int n, digit;
    int found = 0;  // Variable to track if any digit greater than 3 is found

    // Input the number
    printf("Enter n: ");
    scanf("%d", &n);

    // Use a while loop to display digits greater than 3
    while (n > 0) {
        digit = n % 10;
        
        // Check if the digit is greater than 3
        if (digit > 3) {
            printf("%d\n", digit);
            found = 1;  // Set found to 1 if a digit greater than 3 is found
        }

        n /= 10;
    }

    // Check if no digit greater than 3 was found
    if (!found) {
        printf("none\n");
    }

    return 0;
}
