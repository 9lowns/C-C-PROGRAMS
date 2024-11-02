#include <stdio.h>

int main () {

    // ternary operator in taking the largest number bitch

    int a,b,c,result;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    result = (a > b && a > c) ? a : (b > a && b > c) ? b : c;

    printf("The largest number is: %d",result);




    return 0;
}