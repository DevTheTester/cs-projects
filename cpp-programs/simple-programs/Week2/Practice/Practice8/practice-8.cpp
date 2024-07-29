#include <iostream>
using namespace std; 

int a, b, c, d, e, year, result; 

int main(void){
    cout << "Enter a year: ";
    cin >> year;
    cout << endl;

    c = year % 19;
    d = year % 4;
    e = year % 7;
    a = ((c * 19) + 24) % 30;
    b = ((2*d) + (4*e) + (6*a) + 5) % 7;
    result = 22 + a + b;

    if (result <= 31){
        cout << "Date of Easter Sunday: " << result << " March " << year;
    } else {
        cout << "Date of Easter Sunday: " << result - 31 << " April " << year;
    }
    return 0;
}