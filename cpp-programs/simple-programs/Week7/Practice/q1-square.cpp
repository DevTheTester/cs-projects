#include <iostream>
using namespace std;

/*
Task: 
Write a function called square, that has a real number argument. The function should return the
square of the number, for example, if the function is called with 5.0 then main should display:
The square of the number is 25.0
*/

float square(float n);

int main(){
    float n = 2.0;
    int display_number = square(n);
    cout << display_number;
}

float square(float n){
    return n * n;
}