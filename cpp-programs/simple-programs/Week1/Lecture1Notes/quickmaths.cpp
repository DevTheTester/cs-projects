#include <iostream>
using namespace std; 

// Takes integer input, outputs dividion by 10/5 and remainder

int main(void) {
    int value1, value2, value3, result1, result2, result3, result4; // Declare variables

    value1 = 10; // Define variables
    value2 = 5;
    cin >> value3;

    result1 = value3 / value1; // Compute  division and remainder, by value 1
    result2 = value3 % value1;

    result3 = value3 / value2; 
    result4 = value3 % value2; 

    cout << value3 << " divided by " << value1 << " is " << result1 << " with a remainder of " << result2 << endl;
    cout << value3 << " divided by " << value2 << " is " << result3 << " with a remainder of " << result4 << endl;
}