#include <stdio.h>

int main () {

    int w1, w2, w3;

    printf("Enter 1st weight: "); scanf("%d", &w1);
    printf("Enter 2nd weight: "); scanf("%d", &w2);
    printf("Enter 3rd weight: "); scanf("%d", &w3);

    if(w1 <= w2 && w1 <= w3) {
        printf("The 1st weight is the smallest\n");
    } if(w2 <= w1 && w2 <= w3) {
        printf("The 2nd weight is the smallest\n");
    } if(w3 <= w1 && w3 <= w2) {
        printf("The 3rd weight is the smallest\n");
    }

    return 0;
}