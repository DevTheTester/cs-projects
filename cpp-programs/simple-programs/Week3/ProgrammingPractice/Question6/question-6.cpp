#include <iostream>
using namespace std; 

int main(){
    int country;
    float temperature, converted_temperature;

    cout << "Enter country 1 = NZ, 0 = USA: ";
    cin >> country;
    cout << "Enter temperateure: ";
    cin >> temperature;

    if (country == 1){
        converted_temperature = temperature * 1.8 + 32;
    } else if (country == 0){
        converted_temperature = (temperature - 32) / 1.8;
    }

    cout << "Converted temperature is " << converted_temperature;
    return 0;
}