#include <iostream>
using namespace std;

int n1, result1, result2, last_digit_n, remaining_digits_n, n2;

int main(void){
    cout << endl << "Enter a number: ";
    cin >> n1;

    result1 = n1 % 7; // Remainder of n / 7
    last_digit_n = n1 % 10; // Last digit of n 
    remaining_digits_n = n1 / 10; // First digits of n
    n2 =  remaining_digits_n - last_digit_n * 2; // n after subtracting last digit twice
    result2 = n2 % 7; // Remainder from students weird formula

    cout << endl << "The remainder of " << n1 << " divided by 7 is " << result1
         << endl << remaining_digits_n << " - 2*" << last_digit_n << " = " << n2 << ", "
         << "and the remainder of " << n2 << " divided by 7 " << "is " << result2 << endl << endl;

    return 0;
}