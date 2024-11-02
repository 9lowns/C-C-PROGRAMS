#include <stdio.h>

int main ()
{
    int input,n1,n2;

    printf("Enter the 2-digit integer: ");
    scanf("%d",&input);

    n1 = input / 10;
    n2 = input % 10;

    int product = n1 * n2;

    printf("Product of %d and %d = %d",n1 , n2, product);

    return 0;
}
