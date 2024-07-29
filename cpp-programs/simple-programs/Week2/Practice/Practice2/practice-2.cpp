#include <iostream>
using namespace std; 

int n1, n2; 

int main(void){
    cout << "Enter two integers: ";., //
    cin >> n1 >> n2; 
    if (n1 > n2){
        cout << endl << n1 << " is greater than" << n2;
    } else if (n2 > n1){
        cout << endl << n2 << " is greater than " << n1;
    } else {
        cout << endl << n1 << " and " << n2 << " are equal.";
    }
    return 0;
}