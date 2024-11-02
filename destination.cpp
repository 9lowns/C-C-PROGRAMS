#include <iostream>

using namespace std;

int main()
{
    int destinationCode, timeCode, duration;
    float charge; 

    cout << "Enter Destination Code [1-4]: ";
    cin >> destinationCode;

    cout << "Enter Time Code [1-2]: ";
    cin >> timeCode;

    cout << "Duration of the Call: ";
    cin >> duration;

    if (timeCode == 1) {
        if (destinationCode == 1) {
            charge = 50 * (static_cast<float>(duration) / 3);
            cout << endl << "Destination     :   America Region" << endl;
            cout << "Time of Call    :   Daytime Call" << endl;
        } else if (destinationCode == 2) {
            charge = 30 * (static_cast<float>(duration) / 2);
            cout << endl << "Destination     :   Asian Region" << endl;
            cout << "Time of Call    :   Daytime Call" << endl;
        } else if (destinationCode == 3) {
            charge = 40 * (static_cast<float>(duration) / 3);
            cout << endl << "Destination     :   African Region" << endl;
            cout << "Time of Call    :   Daytime Call" << endl;
        } else if (destinationCode == 4) {
            charge = 35 * (static_cast<float>(duration) / 2);
            cout << endl << "Destination     :   European Region" << endl;
            cout << "Time of Call    :   Daytime Call" << endl;
        } else {
            cout << "Invalid Destination Code!" << endl;
            return 0;
        }
    } else if (timeCode == 2) {
        if (destinationCode == 1) {
            charge = 47 * (static_cast<float>(duration) / 3);
            cout << endl << "Destination     :   America Region" << endl;
            cout << "Time of Call    :   Nighttime Call" << endl;
        } else if (destinationCode == 2) {
            charge = 28 * (static_cast<float>(duration) / 2);
            cout << endl << "Destination     :   Asian Region" << endl;
            cout << "Time of Call    :   Nighttime Call" << endl;
        } else if (destinationCode == 3) {
            charge = 37 * (static_cast<float>(duration) / 3);
            cout << endl << "Destination     :   African Region" << endl;
            cout << "Time of Call    :   Nighttime Call" << endl;
        } else if (destinationCode == 4) {
            charge = 33 * (static_cast<float>(duration) / 2);
            cout << endl << "Destination     :   European Region" << endl;
            cout << "Time of Call    :   Nighttime Call" << endl;
        } else {
            cout << "Invalid Destination Code!" << endl;
            return 0;
        }
    } else {
        cout << "Invalid Time Code!" << endl;
        return 0;
    }

   
    int integerPart = static_cast<int>(charge);
    int decimalPart = (charge - integerPart) * 100; 


    cout << "Charge is       :   " << integerPart << ".";

  
    if (decimalPart < 10) {
        cout << "0"; 
    }
    cout << decimalPart << endl;

    return 0;
}
