#include <iostream>
using namespace std;

int main(){
    int n;
    int prime_numbers_count = 0;
    bool is_prime;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i < n - 1; i++){ // For all numbers from 2 to max number - 1
        is_prime = true;
        for (int j = 2; j < i / 2; j++){ // For all numbers from 2 to half of max number
            if (n % j == 0){ // check if number has
                is_prime = false;
            }
        }
        if (is_prime == true){
            prime_numbers_count += 1;
        }
    }

    cout << "The amount of prime numbers before " << n << " is " << prime_numbers_count;
    return 0;
}