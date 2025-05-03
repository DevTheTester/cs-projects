// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

/*
Write a program that calls two functions named load and round, to set up two corresponding arrays
of 7 positive integers each. The functions must do the following:
load reads in one value, checking that it is between 0 and 500 before assigning it to the first array
round rounds a value from the first array and assigns the rounded value to the second array.
*/

void load(int &n);
int round(int n);

int main() {
    const int ARRAY_SIZE = 7;
    int array1[ARRAY_SIZE];
    int array2[ARRAY_SIZE];

    //load array with valid values
    for (int i = 0; i < ARRAY_SIZE; i++){
        load(array1[i]);
        array2[i] = round(array1[i]);
    }

    //round all of the numbers in the array to the nearest 10
    //load array with valid values
    for (int i = 0; i < ARRAY_SIZE; i++){
        cout << array1[i] << " rounds to " << array2[i] << endl;

    }
    return 0;
}

void load(int &n){
    int tmp;
    cout << "Enter number: ";
    cin >> tmp;
    while (!(tmp >= 0 && tmp <= 500)){
        cout << "Please enter number again: ";
        cin >> tmp;
    }
    n = tmp;
}

int round(int n){
    int n_rounded = (n + 5) / 10;
    n_rounded *= 10;
    return n_rounded;
}


