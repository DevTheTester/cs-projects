#include <iostream>
using namespace std; 

float j, i;

int main(){
    i = 2.1;
    j = ((i * i * i) - 12) / (4 * i) + 3.5;
    cout << "Result is " << j;
}