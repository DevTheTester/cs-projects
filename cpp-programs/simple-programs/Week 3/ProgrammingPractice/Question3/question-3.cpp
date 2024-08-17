#include <iostream>
using namespace std;

int n1, n2;
float rn1, rn2, rn3, average;

int main(){
    cout << "\nEnter 2 integers: ";
    cin >> n1 >> n2;
    cout << "\nEnter 3 real numbers: ";
    cin >> rn1 >> rn2 >> rn3; 
    average = (n1 + n2 + rn1 + rn2 + rn3) / 5;
    cout << "\nAverage is " << average;
    return 0;
}
