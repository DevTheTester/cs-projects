// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
using namespace std;

float getValidNumber();
bool isInRange(float n);

int main() {
    const int MAX = 5;
    float numbers[MAX];
    cout << "Enter 5 real numbers between 0.0 to 100.0: " << endl;
    // read 5 real numbers into array
    for (int i = 0; i < MAX; i++){
        cout << "Number " << i + 1 << ": ";
        numbers[i] = getValidNumber();
    }
    // loop through array
    for (int i = 0; i < MAX; i++){
        if (isInRange(numbers[i])){
            cout << fixed << setprecision(2) << numbers[i] << " is in range 50.0-60.0" << endl;
        }
    }
        // use function to check if value matches params 
        // if value matches params then output the value
    //The end
    return 0;
}

float getValidNumber(){
    float n = 0.0;
    while (true){
        // Read input n
        cin >> n;
        // If n is valid then return it
        if (n >= 0.0 && n <= 100.0){
            return n;
        }
         // else read another value (Repeat)
        cout << "Invlid number please enter again." << endl;
    }
}

bool isInRange(float n){
    if (n >= 50.0 && n <= 60){
        return true;
    }
    return false;
}