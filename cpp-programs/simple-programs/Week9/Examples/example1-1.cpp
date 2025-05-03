#include <iostream>
#include <string>
using namespace std;
float stringtofloat(string str, float total);
float value, total;
string temp;
bool isnumber;

int main() {
    cout << "Enter a float value ";
    cin >> temp;
    isnumber = true;
    total = temp.length();
    for (int i = 0; i < total; i++) {
        if (((temp[i] < '0') || (temp[i] > '9')) && (temp[i] != '.')) {
            isnumber = false;
        }
    }
    if (isnumber) {
        value = stringtofloat(temp, total);
        cout << "The float value is " << value << endl;
    } else {
        cout << temp << " is not an float value!\n";
    }
}
float stringtofloat(string str, float total) {
    // function to convert a string to an integer
    // Read the numbers until you hit a decimal point, 
    // Once you hit decimal point divide the numbers by 10*i
    float num, mult;
    num = 0.0;
    mult = 1;
    int index = total - 1;
    int c;
    for (int i = total; i > 0; i--) {
        c = str[index] - 48;
        if (str[index] == '.'){
            num = num / mult;
            mult = 1;
        } else {
            num = num + c * mult; // issue
            mult *= 10;
        }
        index--;
    }
    return num;
}