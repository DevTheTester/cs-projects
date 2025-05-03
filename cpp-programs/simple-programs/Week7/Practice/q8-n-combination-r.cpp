#include <iostream>
using namespace std;

/*
Write a program to calculate n combination r which is the number of different groups containing r things
that can be chosen from a set of n things. Read in a value for n and then read in a value for r and calculate
the combination using the formula:
*/

int factorial(int n);//function to calculate factorial

int main(){
    int n = 5;
    int factorial_n = factorial(n);
    cout << "Factorial of " << n << " is " << factorial_n;
}

int factorial(int n){
    int result = n;
    for (int i = n-1; i > 0; i--){
        result *= i;
    }
    return result;
}