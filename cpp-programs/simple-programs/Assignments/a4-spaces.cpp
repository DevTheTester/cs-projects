/*

ASSIGNMENT 4

Devon Campbell / Student ID: 24022715

ASSESSOR NOTE: 
I have not done data validation on the input apart from checking that the entered text 
is appropriate length. Because the instructions noted that "input will always be several 
words with a single space between each word because of this I have also not handled the case of 
dividing by zero on when finding the division of spaces using space_divided = deifference / spaces;,
I'm assuming there will always be spaces. I'm also assuming the word will not end with a space"

*/

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
string getText(int width);
void printRuler(int length);

int main(){
    
    const int COL_WIDTH = 90;
    string s_raw;
    string s_output;

    // Read input
    cout << "Enter some text: ";
    s_raw = getText(COL_WIDTH);
    s_output = s_raw;

    // Find difference of text from column length
    int difference;
    difference = COL_WIDTH - s_raw.length();

    // Find gaps in raw text
    int space_vertices[COL_WIDTH];
    int spaces = 0;
    for (int i = 0; i < s_raw.length(); i++){
        if (s_raw[i] == ' '){
            space_vertices[spaces] = i;
            spaces++;
        }
    }

    // Divide remaining space to fill by gaps and put into output text
    int space_divided = difference / spaces;
    for (int i = 0; i < spaces; i++){
        s_output.insert(space_vertices[i], space_divided, ' ');
        space_vertices[i+1] += (space_divided * (i+1)); //space vertices is not right after the 3rd one
    }

    // Add remaining spaces to gaps in output text
    int space_remaining = difference % spaces;
    for (int i = 0; i < space_remaining; i++){
        s_output.insert(space_vertices[i], 1, ' ');
        space_vertices[i+1] += (i+1);
    }
    for (int i = 0; i < spaces; i++){
        cout << space_vertices[i] << " ";
    }
    cout << endl;
    cout << difference << " is difference\n";

    // Output numbers to show column width 
    printRuler(COL_WIDTH);
    
    // print the output text
    cout << endl;
    cout << s_output << endl;

    return 0;

}

string getText(int width){
    string s;
    while (true){
        getline(cin, s);
        if (s.length() <= width){
            return s;
        }
        cout << "Please enter text less than " << width << " characters long: ";
    }
}

void printRuler(int length){
    for (int i = 0; i < length / 10; i++){
        for (int j = 1; j < 10; j++){
            cout << j;
        }
        cout << "0";
    }
    for (int i = 1; i <= length % 10; i++){
        cout << i;
    }
}