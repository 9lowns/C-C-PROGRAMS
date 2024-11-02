#include <stdio.h>

int main () {

    char operator;

    printf("Choose a operator (+ - * /): ");
    scanf("%c",&operator);

    int n1, n2;

    printf("Enter first number: ");
    scanf("%d",&n1);

    printf("Enter second number: ");
    scanf("%d",&n2);

    int result;

    switch (operator) {
        case '+':
        result = n1 + n2;
        break;

        case '-':
        result = n1 - n2;
        break;

        case '*':
        result = n1 * n2;
        break;

        case '/':
        result = n1 / n2;
        break;

    }
    printf("Result: %d",result);

    return 0;
}