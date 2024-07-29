#include <iostream>
using namespace std; 

int n1, n2, n3, tmp;

int main(void){
    cout << "Enter 3 numbers: "; 
    cin >> n1 >> n2 >> n3;
    cout << endl; 

    if (n2 > n1){
        tmp = n1;
        n1 = n2; 
        n2 = tmp;
    }
    if (n3 > n1){
        tmp = n1; 
        n1 = n3; 
        n3 = tmp;
    }
    if (n3 > n2){
        tmp = n2;
        n2 = n3;
        n3 = tmp;
    }

    cout << n1 << " " << n2 << " " << n3;
    return 0;
}

/* Test Data
    1 2 3 - P 
    1 3 2 - P
    3 2 1 - p
    3 1 2 - p
    2 1 3 - p
    2 3 1 - p
*/