#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float n1, n2, difference, difference_absolute;
    cout << "Enter 2 real numbers: ";
    cin >> n1 >> n2;
    difference_absolute = fabs(n1 - n2);
    cout << "\nAbsolute difference is " << difference_absolute;
    return 0;
}