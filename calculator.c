#include <stdio.h>

int main ()
{
    float n1,n2;
    char operator;

    printf("Enter 1st number: ");
    scanf("%f",&n1);

    printf("Enter 2nd number: ");
    scanf("%f",&n2);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c",&operator);

    if ( operator == '+') {
        printf("%f", n1 + n2);
    } else if ( operator == '-') {
        printf("%f", n1 - n2);
    } else if ( operator == '*') {
        printf("%f", n1 * n2);
    } else if ( operator == '/') {
        printf("%f", n1 / n2);
    } else {
        printf("Error! operator is not correct");
    }

    return 0;
}