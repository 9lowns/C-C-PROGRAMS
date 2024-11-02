#include <stdio.h>

int main() {
    int N; char CH;


    printf("Enter the character: ");
    scanf(" %c", &CH);

    printf("Enter the number: ");
    scanf("%d", &N);

    if (N >= 0 && N <= 100)
	{
        for (int i = 0; i < N; i++)
		{
            printf("%c", CH);
        }
    }

    printf("\n");

    return 0;
}