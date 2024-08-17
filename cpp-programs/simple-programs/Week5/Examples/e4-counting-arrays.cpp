#include <iostream>
using namespace std;

int number, indx;
int total[10]; // 10 totals – one for each area

int main() {
 for (indx = 0; indx < 10; indx++) {
 total[indx] = 0;
 }

 cout << "Enter a NZ landline number (-1 to stop) ";
 cin >> number;

 while (number != -1) {
 indx = number / 10000000;
 total[indx]++;
 cout << "Enter a NZ landline number (-1 to stop) ";
 cin >> number;
 }
 
 cout << "Total numbers by area code are:\n";
 for (indx = 1; indx < 10; indx++) {
 cout << "Area code ";
 cout.fill('0'); // fill extra places with zeros
 cout.width(2); // width of the display will be 2
 cout << right << indx;
 cout << " total numbers is " << total[indx] << endl;
 }
}