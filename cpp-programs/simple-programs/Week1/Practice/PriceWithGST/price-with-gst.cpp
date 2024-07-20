#include <iostream>
using namespace std;

#include <iostream>
using namespace std; 

int price_cents, gst, final_price;

int main(void){
    cout << "NOTE: enter all amounts as cents.\n";
    cout << "For example, $8.97 is entered as 897\n";
    cout << "Enter the price in cents: ";
    cin >> price_cents; // Prompt for price

    gst = price_cents * (15/100);
    final_price = price_cents + gst; // Calculate final price with gst

    cout << "Price tag: " << final_price / 100 << "." << final_price % 100; // Price in dollars
}