/* 

// Version 1

#include <iostream>
using namespace std;

int year, leapyear;

int main(void) {
    cout << "Enter a year: ";
    cin >> year; 
    leapyear = 0;
    if (year % 4 == 0) {
        leapyear = 1;
    } 
    if (year % 100 == 0) {
        leapyear = 0;
    }
    if (year % 400 == 0) {
        leapyear = 1; 
    }
    if (leapyear == 1) {
        cout << year << " is a leap year.";
    } else {
        cout << year << " is NOT a leap year.";
    }
}

*/

// Version 2

#include <iostream> 
using namespace std;

int year, is_leap_year;

int main(){
    cout << "Enter a year: "; 
    cin >> year; 

    if (!(year % 4) && year )
}

