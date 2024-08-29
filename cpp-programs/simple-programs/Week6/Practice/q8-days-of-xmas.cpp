#include <iostream>
using namespace std;

void firstDay();
void secondDay();
void thirdDay();
void fourthDay();

int main() {
    // Loop for 4 days
    for (int day = 1; day <= 4; day++){
        cout << "On the ";
        if (day == 1){
            cout << "first day of christmas my true love gave to me,\n";
            firstDay();
        } else if ( day == 2){
            cout << "second day of christmas my true love gave to me,\n";
            secondDay();
        } else if (day == 3){
            cout << "third day of christmas my true love gave to me,\n";
            thirdDay();
        } else if (day == 4){
            cout << "fourth day of christmas my true love gave to me,\n";
            fourthDay();
        }
    }
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