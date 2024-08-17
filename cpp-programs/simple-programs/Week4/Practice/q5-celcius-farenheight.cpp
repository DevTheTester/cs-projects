#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

int main(){
    int celsius;
    float fahrenheight = 0.0;

    cout << "Conversion from degress Celsius to Fahrenheit" << endl;
    cout << "Celsius        Fahrenheight" << endl;
    for (celsius = 0; celsius <= 50; celsius +=5){
        fahrenheight = celsius *1.8 + 32;
        cout.width(3);
        cout << right << celsius;
        cout.width(15);
        cout << " ";
        cout << fixed << setprecision(1); 
        cout << fahrenheight << endl;
    }
}