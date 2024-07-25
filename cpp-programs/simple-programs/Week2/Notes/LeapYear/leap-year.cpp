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