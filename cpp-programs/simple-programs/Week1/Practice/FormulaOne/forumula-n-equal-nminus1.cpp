#include <iostream>
using namespace std;

int n, result;

int main(void){
    n = 4;
    result = n / (n-1);
    cout << endl
        << "The answer to n = (n-1) where n = "
        << n
        << " is "
        << result << endl;
    return 0;
}