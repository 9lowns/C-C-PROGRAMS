#include <stdio.h>

int main() {
    int x, y, row;

    printf("Enter number of *:  ");
    scanf("%d", &row);

 
    for (x = 1; x <= row; x++)
	 {
       
        for (y = 1; y <= row - x; y++)
		 {
            printf(" ");
        }
        for (y = 1; y <= 2 * x - 1; y++) 
		{
            printf("*");
        }
        printf("\n");
     }
    for (x = row - 1; x >= 1; x--)
	 {
        for (y = 1; y <= row - x; y++)
		 {
            printf(" ");
        }
        for (y = 1; y <= 2 * x - 1; y++)
		 {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
