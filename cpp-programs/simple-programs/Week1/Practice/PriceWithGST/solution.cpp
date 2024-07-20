#include <iostream>
using namespace std;
int amount, gst, price, dollars, cents;
int main() {
 cout << "Type in an amount in cents: ";
 cin >> amount;
 gst = amount * 15 / 100; // assume GST of 15%
 price = amount + gst;
 dollars = price / 100;
 cents = price % 100;
 cout << "Price tag: $" << dollars << ".";
 cout.width(2); // set the display to use 2 spaces for the number
 cout.fill('0'); // fill the extra spaces with zeros
 cout << cents << endl;
}