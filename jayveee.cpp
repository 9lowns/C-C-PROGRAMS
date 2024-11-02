#include <iostream>
#include <algorithm> 
#include <limits>	

using namespace std;

// Function to display the array
void displayArray(int arr[], int size, const string& order) {
    cout << order << " set of numbers" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ". " << arr[i] << endl;
    }
    cout << endl;
}

int main() {
    int numbers[10];
    bool valid;
    int num;

    // Input 10 integers
    for (int i = 0; i < 10; i++) {
        do {
            valid = true;
            cout << "Enter integer for Element " << i + 1 << ": ";
            cin >> num;

          
            if (cin.fail()) {
                cout << "Invalid input. Please enter an integer." << endl;
                cin.clear(); // clear error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                valid = false;
            } else {
                numbers[i] = num;
            }
        } while (!valid);
    }

   
    displayArray(numbers, 10, "Original");

  
    int ascending[10];
    for (int i = 0; i < 10; i++) {
        ascending[i] = numbers[i];
    }
    sort(ascending, ascending + 10);
    displayArray(ascending, 10, "Ascending");

  
    int descending[10];
    for (int i = 0; i < 10; i++) {
        descending[i] = ascending[i];
    }
    reverse(descending, descending + 10);
    displayArray(descending, 10, "Descending");

    return 0;
}
