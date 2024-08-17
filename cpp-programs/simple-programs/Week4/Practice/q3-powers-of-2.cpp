#include <iostream>
using namespace std;

int main(){
    int n = 1;
    int total = 1;

    cout << "Enter a number that is a power of 2: ";
    while (n % 2 != 0){
        cin >> n;
    }

    while (total <= n){
        cout << total << endl;
        total *= 2;
    }    
    return 0;
}