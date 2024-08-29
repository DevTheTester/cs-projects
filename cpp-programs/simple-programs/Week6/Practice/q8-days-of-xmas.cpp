#include <iostream>
using namespace std;

void firstDay();
void secondDay();
void thirdDay();
void fourthDay();

int main() {
    
    cout << "On the first day of christmas my true love gave to me,\n";
    firstDay();
    cout << "second day of christmas my true love gave to me,\n";
    secondDay();
    cout << "third day of christmas my true love gave to me,\n";
    thirdDay();
    cout << "fourth day of christmas my true love gave to me,\n";
    fourthDay();
}

void firstDay() {
    cout << "a partridge in a pear tree.\n\n";
}

void secondDay() {
    cout << "two turtle doves,\nand ";
    firstDay();
}

void thirdDay() {
    cout << "three french hens,\n";
    secondDay();
}

void fourthDay() {
    cout << "four calling birds,\n";
    thirdDay();
}