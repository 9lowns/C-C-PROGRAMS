#include <stdio.h>

int main() {
    long long number;

    printf("Enter number: ");
    scanf("%lld", &number);

    int count = 0;

    if (number == 0) {
        count = 1; 
    } else {
        for (; number != 0; number /= 10)
        {
            ++count;
        }
    }
    printf("%d\n", count);


    return 0;
}
