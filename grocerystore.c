#include <stdio.h>

int main() {
    float num, sum = 0.0, min, max;
    int count = 0;

  
    while (scanf("%f", &num) && num != -1) {
        if (count == 0 || num < min) min = num;
        if (count == 0 || num > max) max = num;
        sum += num;
        count++;
    }

    if (count > 0) {
        double average = sum / count;
        printf("Minimum: %.2f\n", min);
        printf("Maximum: %.2f\n", max);
        printf("Average: %.2f\n", average);
    } 

    return 0;
}

// sample output: 10.00
//                20.00
//                30.00
//                40.00
//               -1

//               Minimum: 10.00
//               Maximum: 40.00
//               Average: 25.00