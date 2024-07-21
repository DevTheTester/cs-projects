#include <iostream>
using namespace std;

int a, b, c;

int main(void){
    cout << "Enter 3 numbers: "; // Prompt
    cin >> a >> b >> c;

    if (a == 1 && b == 1 || c == 1) { // And operation first
        cout << "A and B = 1"
             << " or c = 1";
    }
    if (a == 1 && (b == 1 || c == 1)) { // Or operation first
        cout << "A = 1 and b or c = 1";
    }
    if (!(a == 1) && (b == 1 || c == 1)) {
        cout << "A not = 1 and b or c = 1";
    }
    if (!((a == 1) && (b == 1 || c == 1))) {
        cout << "A = 1 and b or c = 1 is not true";
    }
    return 0;
}