#include <stdio.h>

int main()
{
    int secss, hrs, min, sec;

    printf("Enter the time (seconds): ");
    scanf("%d", &secss);

    hrs = secss / 3600;
    secss = secss % 3600;
    min = secss / 60;
    sec = secss % 60;

    printf("%d hr %d min %d sec", hrs, min, sec);

    return 0;
}