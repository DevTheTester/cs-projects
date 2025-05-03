/*

ASSIGNMENT 4

Devon Campbell / Student ID: 24022715

ASSESSOR NOTE: 
"I've only done the appropriate amount of error / edge case handling as to handle all cases in the notes and examples. There may be others I have missed but all 
cases in the instructions should be convered."

*/

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

string getNumber();
string convertBinary(string n);
string convertDecimal(string n);

// Decimal numbers must be in the range 0 to 255 (you must check for this) :CHECKED
// 2. Binary numbers must not be more than 9 binary digits (you must check for this) :CHECKED
// 3. A binary number must always be entered with a leading zero (the first digit you enter must be 0) :CHECKED
// 4. A decimal number must never be entered with a leading zero (check for this) :CHECKED
// 5. Decimal numbers must never be displayed with leading zeros :CHECKED
// 6. Binary numbers must always be displayed as 8 bits with a space after 4 bits (see the examples) :CHECKED
// 8. There are several different error messages – see examples 4 to 7 :CHECKED
// 9. Do not use a library function to convert binary to decimal – write your own function :DONE
// 10. Do not use a library function to convert decimal to binary – write your own function :DONE
// 11. You must include at least two (2) of your own functions (these could be 9 and 10 above) :DONE

const int BINARY_SIZE = 9;
bool is_binary = false;
string test_n = "000000010";

int main(){
    string value;
    string binary_value, decimal_value;
    // // Prompt user for a number
    cout << "Enter a number: ";
    value = getNumber();

    // If the number is binary convert to decimal
    if (is_binary){
        decimal_value = convertBinary(value);
        cout << "Converting binary to decimal. " << "The result is " << decimal_value;
    } else {
        binary_value = convertDecimal(value);
        cout << "Converting decimal to binary. " << "The result is " << binary_value;
    }
}

string getNumber(){
    string number;
    while (cin >> number){
        is_binary = false;
        bool is_valid_number = true;
        bool is_valid_binary = true;
        //If first digit is a 0 check if the value is a valid binary number 
        if (number[0] == '0'){
            is_binary = true;
            for (int i = 1; i < number.length(); i++){
                // If the char is a digit
                if (isdigit(number[i])){
                    // If the char is not a binary digit
                    if (number[i] != '0' && number[i] != '1'){
                        is_valid_binary = false;
                    }
                } 
                // If the char is not a digit
                else {
                    is_valid_number = false;
                }
            }
            // Show appropriate error messages
            if (!is_valid_number){
                cout << "This is not a valid number.\n";
                continue;
            } else if (!is_valid_binary){
                cout << "This is not a valid binary number.\n";
                continue;
            } else if (number.length() > BINARY_SIZE){
                cout <<"This binary number has more than 9 binary digits.\n";
                continue;
            }
            //If all valid number flags are still true return the number 
            else {
                return number;
            }
        
        // If the number is decimal
        } else {
            // Check that number has no characters
            for (int i = 0; i < number.length(); i++){
                if (!isdigit(number[i])) {
                    is_valid_number = false;
                }
            }
            // Check that decimal number has no trailing 0's 
            if (number.length() > 1 && number[0] == '0') {
                cout << "This is not a valid decimal number.\n";
                continue;
            }
            int i_number = stoi(number);
            // Check that number is within correct range
            if (i_number < 0 || i_number > 255){
                cout << "This decimal number is outside the range 0 to 255.\n";
                continue;
            }

            if (!is_valid_number){
                cout << "This is not a valid number.\n";
                continue;
            }
            return number;
        }
    }
    return "";
}

string convertBinary(string n){
    int n_converted = 0;
    int current_power = 0;
    int base = 2;
    // For each digit in the number with indexing start from final digit
    for (int i = n.length() - 1; i >= 0; i--){
        if (n[i] == '1'){
            n_converted += pow(base, current_power);
        }
        current_power++;
    }
    return to_string(n_converted);
}

string convertDecimal(string n){
    string n_converted = "";
    int n_int = stoi(n);
    int remainder;
    // Keep dividing decimal number by 2 adding remainder to front of string
    for (int i = 0; i < 8; i++){
        remainder = n_int % 2;
        n_converted = to_string(remainder) + n_converted; 
        n_int /= 2; 
        
    }
    // Space for formatting
    n_converted.insert(4, " ");
    return n_converted;
}