#include <iostream>
using namespace std;
int indx;
float total, avg;
float rain[12];
int main() {
 total = 0.0;
 for (indx = 0; indx < 12; indx++) {
 cout << "Enter rainfall for month " << indx + 1 << ": ";
 cin >> rain[indx];
 total = total + rain[indx];
 }
 avg = total / 12.0;
 cout << "Average monthly rainfall is " << avg;
}
