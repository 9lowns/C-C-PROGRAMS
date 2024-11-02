#include <stdio.h>

int main(void) {
	int w, h;

	// Get width input
	printf("Enter width of scyscraper: ");
	scanf("%d", &w);

	// Get Height input
	printf("Enter height of skyscraper: ");
	scanf("%d", &h);

	// Get the absolute of of width
	int half = w / 2;

	// Check if the absolute half multiplied by 2
	// is the same as the input width
	int perfectHalf = half * 2 == w;

	int x, y;

	// Start the loop on the height
	for (y = 0; y < h; y++) {
		// Then loop the width plus 2
		for (x = 0; x < w + 2; x++) {
			// Check if y is in the range of 1
			// and the height minus 1
			if (y > 0 && y < h - 1) {
				// If it's true then check if x is in
				// the range of 1 and the width plus 1
				if (x > 0 && x < w + 1) {
					printf("*");
				} else {
					printf(" ");
				}
			} else {
				// If it's false then y must
				// be 0 or the input height
				if (y == 0) {
					// Now we check if the absolute half
					// is a perfect half
					if (perfectHalf) {
						// If its true then we check if
						// x is equal to the half of the
						// width or half of the width plus 1
						if (x == half || x == half + 1) {
							printf("*");
						} else {
							printf(" ");
						}
					} else {
						// If its not true then we check if x is
						// equal to the half of the width plus 1
						if (x == half + 1) {
							printf("*");
						} else {
							printf(" ");
						}
					}
				} else {
					// If its false then it y must be
					// the input height
					printf("*");
				}
			}
		}

		// Add a new line
		printf("\n");
	}

	return 0;
}