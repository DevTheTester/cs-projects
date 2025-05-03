#include <iostream>
#include <math.h>
using namespace std;

/*
Task: 
Write a function with the prototype int max(int a, int b, int c) which returns the
largest of the three values. The values must be read inside main – do not read values inside the function.
*/

int max(int a, int b, int c);

int main(){
    int a, b, c, largest; 
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    largest = max(a, b, c);
    cout << "Largest is: " << largest;
}

int max(int a, int b, int c){
    int largest = 0;
    if (a >= b && a >= c){
        return a;
    } else if (b >= a && b >= c){
        return b;
    } else {
        return c;
    }
}