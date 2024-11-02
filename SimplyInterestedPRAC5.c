#include <stdio.h>

int main ()
{
    float amount, percent, years, interest;

    printf("Enter the amount: ");
    scanf("%f",&amount);

    printf("Enter the rate percentage: ");
    scanf("%f",&percent);

    printf("Enter the number of years: ");
    scanf("%f",&years);

    interest = (amount * percent * years) / 100;

    printf("Simple interest = %.2f",interest);


    return 0;
}

//calculate the interest ahead of time