#include <iostream>
using namespace std; 

int main(){
    int const FIBONACCI_ARRAY_SIZE = 8;
    int fibonacci[FIBONACCI_ARRAY_SIZE];

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for (int i = 1; i < FIBONACCI_ARRAY_SIZE - 1; i++){
        fibonacci[i + 1] = fibonacci[i] + fibonacci[i -1];
    }

    cout << "Fibonacci array goes: ";
    for (int i = 0; i < FIBONACCI_ARRAY_SIZE; i++){
        cout << fibonacci[i] << " ";
    }
    return 0;
}