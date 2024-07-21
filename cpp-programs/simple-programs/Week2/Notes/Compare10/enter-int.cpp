#include <iostream>
using namespace std; 

int value;

int main(void){
    cout << "Enter an integer value: ";  //prompt
    cin >> value;
    if (value < 10) {
        cout << "This value is less than 10";
    } 
    if (value > 10) {
        cout << "This value is greater than 10";
    }
    if (value == 10) {
        cout << "This value is equal to 10";
    }

    return 0;
}