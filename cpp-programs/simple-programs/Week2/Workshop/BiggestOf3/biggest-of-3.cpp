#include <iostream>
using namespace std;

int num1, num2, num3; // fixed error 1 - declare al variables

int main(){
    cout << "Type in three different integers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3) { // Fix error 2 - And instead of Or
        cout << "The biggest number is " << num1 << endl;
    }
    else if (num2 > num3) { // Fix error 3 - to make sure only one case executes
        if (num2 > num1) { // Fix error 4 - incorrect variable name
            cout << "The biggest number is " << num2 << endl;
        } 
    } else {
        cout << "The biggest number is " << num3 << endl; // Fix error 5 // num3 instead of num1
    }
}