#include <iostream>
using namespace std;

/* Defines int of value 4 and returns n / n-1 */

int value, result;

int main(void){

    value = 4;
    result = value / (value - 1);

    cout << endl << endl;
    cout << "Result = " << result << endl << endl;

    return 0;
}