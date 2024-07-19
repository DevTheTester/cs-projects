#include <iostream>
using namespace std; 

int main(void){
    int t;

    cout << endl << "Enter a number fool: "; 
    cin >> t;

    cout << endl << "Hours is " <<
    t/60/60 << 
    ", minutes is " <<
    t/60%60 <<
    ", seconds is " <<
    t%60 <<
    "." <<
    endl << endl;

    return 0;

}