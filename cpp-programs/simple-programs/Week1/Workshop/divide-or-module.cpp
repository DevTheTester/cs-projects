#include <iostream>
using namespace std; 

int choice, a, b, result;

int main(void){
    cout << endl << "Enter 1 to divide or 2 for leftovers: ";
    cin >> choice;

    if (choice == 1){
        cout << endl << "Enter 2 integers to divide: ";
        cin >> a >> b;
        result = a / b;
        cout << endl << result << endl;
    }
    else if (choice == 2){
        cout << endl << "Enter 2 integers to find leftovers: ";
        cin >> a >> b;
        result = a % b;
        cout << endl << result << endl;
    }

    return 0;
}