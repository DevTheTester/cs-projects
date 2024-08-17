#include <iostream>;
using namespace std; 

int main(){
    int sum = 0;
    cout << "Even Numbers between 180 and 200" << endl;
    for (int i = 180; i <= 200; i += 2){
        cout << i << endl;
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}