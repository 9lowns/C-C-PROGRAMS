#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;

    cout << "enter a num: ";
    cin >> n1 >> n2 >> n3;

 
    int smallest = n1;
    if (n2 < smallest) {
        smallest = n2;
    }
    if (n3 < smallest) {
        smallest = n3;
    }

    int largest = n1;
    if (n2 > largest) {
        largest = n2;
    }
    if (n3 > largest) {
        largest = n3; 

    }

    cout << smallest << " is the first number numerically";
    cout << largest << " is the last number numerically";

    return 0;
}