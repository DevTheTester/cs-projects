#include <iostream>
using namespace std;

/*
Write a program that reads in an array of 6 real numbers, deletes the value at index 2 and displays the
changed contents of the array, then inserts 6.75 at index 1 and displays the contents again.
*/

int main(){
    int a[6];

    // Read in 6 real nubmers 
    cout << "Enter 6 numbers: ";
    for (int i = 0; i < 6; i++){
        cin >> a[i];
    }
    // output original list 
    for (int i = 0; i < 6; i++){
        cout << a[i] << " ";
    }
    // Delete element at index 2
    for (int i = 2; i < 6; i++){
        a[i] = a[i+1];
    }
    cout << endl;
    // output new list 
    for (int i = 0; i < 6; i++){
        cout << a[i] << " ";
    }
    return 0;
}