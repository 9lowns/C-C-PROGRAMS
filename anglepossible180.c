#include <stdio.h>

int main() {

    int a1,a2,a3;
    
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    
    if (a1 + a2 + a3 == 180) {
        printf("POSSIBLE");
    }
    
    
    
    return 0;
}

//A triangle has three sides. That's a simple fact. However, in the mathematical world, it goes far beyond that.
//Your tutee turns out to be a Grade 8 student who is currently in Geometry learning about the properties of a
//triangle. In a triangle, the sum of the three angle measures must be equal to 180 degrees.

//This task is pretty straightforward. You just need to create a program that asks for input three integers which
//represent the three angle measures, and then you will determine whether it is possible for a triangle to be
//formed with those three given angles. Print either "POSSIBLE" or "NOT POSSIBLE" as outputs.

//Your tutee really does not believe that computers can also solve those kinds of problem. Now prove him
//wrong and show that computers can actually determine for you if the three given angle values can actualy form a triangle.

// Sample Input: 90
//               45
//               45

// Sample Output: POSSIBLE