#include <stdio.h>

int main () {

    double salary;

    printf("Enter salary: ");
    scanf("%lf",&salary);

    double *ptr = &salary;
    printf("Your salary is: %.2lf",*ptr);

    *ptr = 2* *ptr;

    printf("Youre salary now is: %.2lf",*ptr);


    return 0;
}