#include <iostream>
using namespace std; 

int n, alignment, leading_0;

int main(){
    cout << "Enter a 4 digit number: ";
    cin >> n;
    cout << "Choose alignment, 0 = right, 1 = left: "; 
    cin >> alignment;
    if (alignment == 1){
        cout << n;
    }
    else if (alignment == 0){
        cout << "Choose to fill with leading 0's, 0 = Yes, 1 = No: ";
        cin >> leading_0;
        cout.width(6);
        if (leading_0 == 0){
            cout.fill('0');
        }
        cout << n;
    }
    else{
        cout << "Error choosing alignment, choose 0 or 1.";
    }
    return 0;
}