#include <iostream> 
using namespace std; 

int n; 

int main(void){
    cout << "Enter an integer: ";
    cin >> n;
    if (n >= 99 && n <=103){
        cout << endl << n << " is within range 99-103." << endl;
    } else {
        cout << n << " is NOT within range 99-103." << endl;
    }
    return 0;
}