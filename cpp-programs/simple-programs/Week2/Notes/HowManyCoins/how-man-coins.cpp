#include <iostream>
using namespace std;

/* Caculates min number of coins needed to pay an amount. 
   Amount must be ess that $1 and must be a multiple of 10. */

int cents, total;

int main(void) {
    cout << "Enter an amount in cents "; //Prompt
    cin >> cents;
    if (cents >= 100) {
        cout << cents << " is greater than one dollar\n";
    } else if (cents % 10 != 0) {
        cout << cents << " is not a mulitple of 10\n";
    } else {
        cout << cents << " cents = ";
        total = 0; 
        if (cents >= 50) {
            cents -= 50;
            cout << "50c + ";
            total += 1;
        }
        if (cents >= 20) {
            cents = cents - 20; 
            cout << "20c + "; 
            total += 1;
        }
        if (cents >= 20) {
            cents = cents - 20; 
            total += 1;
            cout << "20c "; 
            if (cents >= 30) {
                cout << " + "; 
            }
        }
        if (cents >=10) {
            cents = cents - 10; 
            cout << "10c";
            total += 1; 
        }
        cout << " You need " << total << " coins to pay.";
    }
}