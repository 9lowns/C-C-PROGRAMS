#include <stdio.h>

int main ()
{
    int i, x;

    printf("Enter any number: ");
    scanf("%d",&x);

    for (i = 1; i <= 55; i++)
    {
        printf("%d x %d = %d\n", x,i,x*i);
    }

    return 0;
}