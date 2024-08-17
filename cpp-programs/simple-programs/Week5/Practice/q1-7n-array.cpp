#include <iostream>
using namespace std;

/* Program that uses a for loop to read in 7 real numbers and store them in an array. Then uses
another for loop to display the numbers in the reverse order. Does NOT sort.
*/

// Step 1 declare array size n 
// Read in values for n into array 
// Loop through values in array from n to 0 outputting them

int main(){
    const int num = 7;
    float numbers[num];

    cout << "Enter 7 numbers: ";
    for(int i = 0; i < num; i++){
        cin >> numbers[i];
    }

    for (int i = num - 1; i >= 0; i--){
        cout << numbers[i] << endl;
    }
    return 0;
}