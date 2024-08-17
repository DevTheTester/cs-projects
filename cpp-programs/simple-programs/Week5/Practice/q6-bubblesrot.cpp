#include <iostream>
using namespace std;

// Wanted to mess around with pointers

int main(){
    int numbers[7];
    int tmp;
    int *n_current, *n_next;

    cout << "Enter 7 numbers: "; 
    for (int i = 0; i < 7; i++){
        cin >> numbers[i];
    }

    for (int i = 0; i < 7; i++){ // Loop from first to second to last number
        for (int j = 0; j < 6 - i; j++){ // Loop from current number to last number 
        n_current = &numbers[j];
        n_next = &numbers[j + 1];
        // If current number < next number swap them 
        if (*n_current < *n_next){
            tmp = *n_current;
            *n_current = *n_next;
            *n_next = tmp;
        }
        }
    }

    cout << "The numbers sorted descending are: ";
    for (int i = 0; i < 7; i++){
        cout << numbers[i] << " ";
    }
}