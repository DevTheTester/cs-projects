#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int numbers[4];
    bool has_negative_value = false;
    cout << "Enter 4 integer values: ";
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];
    for (int i = 0; i < 4; i++){
        if (numbers[i] < 0){
            if (has_negative_value == false){
                cout << "The abs function was called for: " << endl;
            }
            has_negative_value = true;
            cout << numbers[i] << endl;
            numbers[i] = fabs(numbers[i]);
        }
    }
    if (!has_negative_value){
        cout << "There was no inpout of negative values." << endl;
    }
    cout << "The stored values are: "; 
    for (int i = 0; i < 4; i++){
        cout << numbers[i] << " ";
    }
}
