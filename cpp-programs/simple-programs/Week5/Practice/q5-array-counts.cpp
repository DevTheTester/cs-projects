#include <iostream> 
using namespace std;

int main(){
    const int MAX_NUMBER_SIZE = 9;
    const int NUMBER_OF_DIGITS = 10;
    int digit_count[NUMBER_OF_DIGITS];
    int number = 0;

    for (int i = 0; i < MAX_NUMBER_SIZE; i++){
        digit_count[i] = 0;
    }

    cout << "Enter a number up to " << MAX_NUMBER_SIZE << " digits long: "; 
    cin >> number;

    while(number != 0){
        int digit = number % 10;
        digit_count[digit] += 1;
        number /= 10;
    }

    for (int i = 0; i < NUMBER_OF_DIGITS; i++){
        cout << "Number of " << i << " digits: " << digit_count[i] << endl;
    }
    return 0;
}