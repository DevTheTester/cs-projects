#include <iostream>
using namespace std; 

int main(){
    int numbers1[4];
    int numbers2[4];
    int sum_numbers[4];

    // Prompt for input into 2 arrays separately called numbers1 and numbers 2 each with 4 values
    cout << "Enter 4 numbers: ";
    for (int i = 0;i < 4; i++){
        cin >> numbers1[i];
    }
    cout << "Enter 4 more numbers to add to those nubmers: ";
    for (int i = 0; i < 4; i++){
        cin >> numbers2[i];
    }

    // Add the values from each array to their value in the same position in corresponding array and store result in new array
    for (int i = 0; i < 4; i++){
        sum_numbers[i] = numbers1[i] + numbers2[i];
    }

    // Output the results 
    for (int i = 0; i < 4; i++){
        cout << "Index " << i << ": " << numbers1[i] << " + " << numbers2[i] << " = " << sum_numbers[i] << endl;
    }

    return 0;
    
}