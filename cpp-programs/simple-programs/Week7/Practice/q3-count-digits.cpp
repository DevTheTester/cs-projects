#include <iostream>
using namespace std;

/* 
3. Write a function that counts and returns the number of digits in a positive integer eg for the integers 43,
105 and 6, the return should be 2, 3 and 1 respectively.
*/

int countDigits(int n);

int main(void){
    int n;
    int n_digits;
    cout << "Enter a number: ";
    cin >> n;

    n_digits = countDigits(n);

    cout << "Number of digits = " << n_digits;
}

int countDigits(int n){
    // error didnl't handle 0 case
    int n_digits = 0;
    while (n > 0){
        n_digits++;
        n /= 10;
    }
    return n_digits;
}