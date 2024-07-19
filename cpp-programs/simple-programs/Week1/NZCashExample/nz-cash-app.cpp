#include <iostream>
using namespace std; 

int price, cash, temp;

int main(void){
    cout << "NOTE: enter all amounts as cents.\n";
    cout << "For example, $8.97 is entered as 897\n";
    cout << "Enter the price on the item: ";
    cin >> price; //reads price 
    temp = price + 5; // adds 5 to the price to move values with difference to nearest 10 < 5 will go to nearest 10
    temp = temp / 10; // interger divides price by 10 so the last value is lost 
    cash = temp * 10; // multiply by 10 so the value is back to original power but without last digit
    cout << "The price is " << price / 100 << "." << price % 100; 
    cout << " and you must pay " << cash/ 100 << "." << price % 100;
}