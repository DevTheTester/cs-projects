#include <iostream>
using namespace std; 

int operands[3];
int result;

int main(void){
    result = 0;
    for (int i = 0;i < 3; i++){
        cout << "Type an integer: ";
        cin >> operands[i];
        if (i == 0){
            result += operands[i];
        }
        else {
            result *= operands[i];
        }
    }
    cout << endl << operands[0] << " x " 
        << operands[1] << " x " 
        << operands[2] << " = " 
        << result << endl;
    return 0;
}