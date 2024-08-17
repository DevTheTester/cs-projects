#include <iostream>
using namespace std;

int amount, weeks, hours, days, totaldays;

int main() {
    cout << "Enter an amount of hours: ";
    cin >> amount;
    cout << totaldays << " Total days" << endl; 
    hours = amount % 24;
    cout << hours << " Hours" << endl; 
    weeks = amount / 24 / 7;
    cout << hours << " weeks" << endl; 
    days = amount / 24 % 7;
    days = totaldays % 7; 
    cout << days << " Days" << endl; 
    if (weeks == 0) {
        cout << amount << " hours = " << totaldays << " days, ";
        cout << hours << " hours.\n";
    } else {
        cout << amount << " hours = " << weeks << " weeks, ";
        cout << days << " days, " << hours << " hours.\n";
    }
}
