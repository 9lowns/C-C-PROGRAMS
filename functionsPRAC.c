#include <stdio.h>

void findsquare (int *number) {

    int square = *number * *number;
    *number = square;
}

int main () {

    int number = 21;

    findsquare(&number);

    printf("Sqaure: %d", number);

    return 0;
}