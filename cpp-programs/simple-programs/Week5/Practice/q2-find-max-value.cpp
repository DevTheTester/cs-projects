#include <iostream>
using namespace std;

/* program that reads several positive integer values into an array. 
Use a trailing value of –1 to stop the input.
Then display the maximum value and the index of the element that contains the maximum value.
What sort of loop should you use and why? */

// 1. array of large size 
// 2. use while loop to take inputs into array
// 3. loop through array to the end and store max value and it's position
// 4. output max value and postiiton

int main(){
    const int size = 100;
    int numbers[size];


    int i = 0;
    cout << "Enter a bunch of integers to store and find the max value of, stop by entering -1: " << endl;
    cin >> numbers[i];
    while (numbers[i] != - 1){
        i++;
        cin >> numbers[i];
    }

    int maximum = numbers[0];
    int position = i; //Starting position will be index of last element in array
    while (i != 0){ // Loop while i is not 1
        if (numbers[i] > maximum){ // if number at the position is > maximum
            maximum = numbers[i]; // set maximum as current value 
            position = i + 1; // set position as current position
        }
        i--; // move to previous position in list
    }
    
    cout << "Maximum value is: " << maximum << " at position " << position;
}