#include <iostream>
#include <iomanip>
using namespace std; 

float radius, pi, circumference;

int main(){
    pi = 3.14159;
    cout << "Enter radius of circle: "; 
    cin >> radius; 
    circumference = 2 * pi * radius;
    cout << "Circumference of circle is ";
    cout << setprecision(3);
    cout << fixed << circumference;
}