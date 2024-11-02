#include <iostream>
using namespace std;


int main () {
    int rev =0;
    int dig,num;
    
    cout<<"enter num: ";
    cin>>num;
    
    while(num > 0) {
        dig = num % 10;
        rev = rev * 10 + dig;
        num /= 10;
    }
    
    cout<<""<<rev;
    
    
    
    
    return 0;
}