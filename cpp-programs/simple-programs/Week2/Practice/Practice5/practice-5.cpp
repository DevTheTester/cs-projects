#include <iostream>
using namespace std; 

int year;

int main(void){
    cout << "Enter a year: ";
    cin >> year;
    cout << endl; 

    if (year % 100 == 0){
        cout << year << " is divisiblle by 100 - new century.";
    } else if (year % 10 == 0){
        cout << year << " is divisible by 10 - new decade.";
    } else {
        cout << year << " is an ordinary year.";
    }

    return 0;
}