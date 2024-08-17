#include <iostream>
using namespace std;

int indx, maxi, mini;
int numbers[50];

int main() {
 cout << "Enter 3 numbers\n";
 for (indx = 0; indx < 3; indx++) {
 cin >> numbers[indx];
 /* or you could load a random number into each element of the array */
 }
 maxi = numbers[0];
 mini = numbers[0];
 for (indx = 0; indx < 3; indx++) {
 if (numbers[indx] > maxi) {
 maxi = numbers[indx];
 }
 if (numbers[indx] < mini) {
 mini = numbers[indx];
 }
 }
 cout << "Maximum is " << maxi << " and minimum is " << mini;
}