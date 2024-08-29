#include <iostream>
using namespace std;

int n;

int main(){
    n = 3;
    cout << "Number Square";
    for (int i = 0; i < 4; i++){
        cout.width(2);
        cout.fill('0');
        cout << endl << n; 
        cout.fill(' ');
        cout.width(10);
        cout.right;
        cout << (n * n);
        n += 3;
    }
    return 0;
}