#include <iostream> 
using namespace std; 

int n;

int main(void){
    cout << "Enter an integer: ";
    cin >> n; 
    cout << endl;

    if (n % 2 == 0){
        cout << n << " is an even number";
        if (n % 10 == 0){
            cout << " that ends in 0.";
        }
    } else {
        cout << n << " is an odd number.";
    }

    return 0;
}