#include <iostream>
using namespace std;

/* Program that uses a for loop to read in 7 real numbers and store them in an array. Then uses
another for loop to display the numbers in the reverse order. Does NOT sort.
*/

// Step 1 declare array size n 
// Read in values for n into array 
// Loop through values in array from n to 0 outputting them

int main(){
    int a[10];

    for (int i=0;i<10;i++){
        a[i] = 0;
    }

    a[0] = 0;
    a[1] = 3;
    a[2] = 7;
    a[3] = 8;
    a[4] = 9;

    for (int i=0;i<10;i++){
        cout << a[i] << " ";
    }

    for (int i=2;i<4;i++){
        a[i]=a[i+1];
    }

    cout << endl;

    for (int i=0;i<10;i++){
        cout << a[i] << " ";
    }
    return 0;
}