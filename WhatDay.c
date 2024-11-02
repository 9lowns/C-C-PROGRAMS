#include <stdio.h>

int main ()
{
    int num;

    printf("Enter what day is today: ");
    scanf("%d",&num);

    if ( num == 1)
    {
        printf("Today is Monday");
    }
    else if ( num == 2)
    {
        printf("Today is Tuesday");
    }
    else if ( num == 3)
    {
        printf("Today is Wednesday");
    }
    else if ( num == 4)
    {
        printf("Today is Thursday");
    }
    else if ( num == 5)
    {
        printf("Today is Friday");
    }
    else if ( num == 6)
    {
        printf("Today is Saturday");
    }
    else if ( num == 7)
    {
        printf("Today is Sunday");
    }
    else
    {
        printf("Invalid input! Please enter week number between 1-7.");
    }


    return 0;
}