#include <stdio.h>

int main () {

    int num;
    int sum;

    do {
        printf("Input a number: ");
        scanf("%d",&num);
        if(num > 0) {
            sum = num;
        }
    } while(num > 0);
    if(num == 0) {
        printf("\nProgram ended due to input of 0\n");
        printf("\nGreatest number is: %d",sum);
    }


    return 0;
}