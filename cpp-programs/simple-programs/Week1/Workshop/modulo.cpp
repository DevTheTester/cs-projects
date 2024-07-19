#include <iostream>
using namespace std; 

int a, b, result;

int main(void){
    cout << endl << "Enter 2 integers: ";
    cin >> a >> b;
    result = a % b;
    cout << endl << result << endl;
    return 0;
}