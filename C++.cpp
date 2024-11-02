#include <iostream>
#include <limits>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    
    cout << "Please enter 10 integers:" << endl;
    
    for (int i = 0; i < SIZE; i++) {
        while (true) {
            cout << "Enter integer " << i + 1 << ": ";
            cin >> numbers[i];
            
            // Check if input is valid (not a character or other invalid type)
            if (cin.fail()) {
                cin.clear();  // clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // discard invalid input
                cout << "Invalid input. Please enter an integer." << endl;
            } else {
                break;
            }
        }
    }

    cout << "You entered the following numbers: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    
    cout << endl;
    return 0;
}
