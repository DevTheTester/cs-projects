/* 
Write a function with 3 real numbers passed to it, that checks if the last value lies between the first two,
returning true if it does and false if it doesn’t. For example, for arguments 4.6, 8.3 and 5.25, it should
return true, for 4.6, 8.3 and 10.0 it should return false and for 7.7, 3.5 and 4.9 it should return true.
(If the case of three identical numbers bothers you, it should return true.)
*/

#include <iostream>
#include <math.h>
using namespace std;

bool isFinalBetweenMiddle(float n1, float n2, float n3);

int main() {
    float n1, n2, n3;
    
    cout << "Enter 3 numbas: ";
    cin >> n1 >> n2 >> n3;
    if (isFinalBetweenMiddle(n1, n2, n3)){
        cout << n3 << " is between " << n1 << " and " << n2; 
    } else {
        cout << n3 << " not in between first 2 numbas.";
    }
    return 0;
}

bool isFinalBetweenMiddle(float n1, float n2, float n3){
    if (n3 > n1 && n3 < n2 || n3 > n2 && n3 < n1){
        return true;
    }
    return false;
}