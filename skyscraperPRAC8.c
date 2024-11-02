#include <stdio.h>

int main(void) {
    int width, height;

    printf("Enter width of skyscraper: ");
    scanf("%d", &width);

    printf("Enter height of skyscraper: ");
    scanf("%d", &height);

    int half = width / 2;
    int perfectHalf = half * 2 == width;
    int x, y;

    for (y = 0; y < height; y++) {
        for (x = 0; x < width + 2; x++) {
            if (y > 0 && y < height - 1) {
                if (x > 0 && x < width + 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            } else {
                if (y == 0) {
                    if (perfectHalf) {
                        if (x == half || x == half + 1) {
                            printf("*");
                        } else {
                            printf(" ");
                        }
                    } else {
                        if (x == half + 1) {
                            printf("*");
                        } else {
                            printf(" ");
                        }
                    }
                } else {
                    printf("*");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
