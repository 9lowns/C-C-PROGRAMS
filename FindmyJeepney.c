#include <stdio.h>

int main() {
    int num;
    char let;

    printf("Enter the jeepney's number: ");
    scanf("%d", &num);
    printf("Enter the jeepney's letter: ");
    scanf(" %c", &let);

    if (num == 12) {
        if (let == 'A') {
            printf("Usual location = Carbon\n");
        } else if (let == 'C') {
            printf("Usual location = Panganiban\n");
        } else if (let == 'F') {
            printf("Usual location = Taboan\n");
        } else if (let == 'G' || let == 'I') {
            printf("Usual location = Mabolo\n");
        } else if (let == 'L' ) {
            printf("Usual location = Labangon\n");
        } else {
            printf("Invalid letter for jeepney number 12\n");
        }
    } else if (num == 13) {
        if (let == 'C') {
            printf("Usual location = Talamban\n");
        } else {
            printf("Invalid letter for jeepney number 13\n");
        }
    } else if (num == 14) {
        if (let == 'D') {
            printf("Usual location = Capitol\n");
        } else {
            printf("Invalid letter for jeepney number 14\n");
        }
    } else {
        printf("Invalid jeepney number\n");
    }

    return 0;
}