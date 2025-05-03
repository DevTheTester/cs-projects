// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool isPrime(int n);

int main() {
    cout << "Enter a numba: ";
    int n;
    cin >> n;
    if (isPrime(n)){
        cout << "Number is prime";
    } else {
        cout << "Number probs aint prime";
    }

    return 0;
}

bool isPrime(int n){
    for (int i = 2; i < n / 2; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}