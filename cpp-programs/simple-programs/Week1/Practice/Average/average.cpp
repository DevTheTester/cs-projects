#include <iostream>
using namespace std;

int a, b, c, d, average;

int main(void){
    cout << "Enter 4 integers: ";
    cin >> a >> b >> c >> d;
    average = (a + b + c + d) / 4;
    cout << "Average: " << average << endl;
    return 0;
}