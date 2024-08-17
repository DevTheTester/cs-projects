#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float n1, n2, n3;
    float r1, r2, r3, sum;

    cout << "Enter 3 digits: ";
    cin >> n1 >> n2 >> n3;

    r1 = 1 / n1;
    r2 = 1 / n2;
    r3 = 1 / n3;

    sum = r1 + r2 + r3;

    cout << "\nReciprocals: 1/" << n1 << " 1/" << n2 << " 1/" << n3;
    setprecision(1);
    cout << "\nSum = " << sum;


}