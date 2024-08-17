#include <iostream>
using namespace std;

// Three cases to test here 
// 1. Removing ID from array 
// 2. ID not found in array 
// 3. 
int num, removeid, position, i;
int id[100];
int main() {
// section 1: enter five student IDs in the correct order
 cout << "Enter five student IDs in the correct order\n";
 num = 5;
 for (i = 0; i < num; i++) {
    cout << "Enter ID number " << i+1 << ": ";
    cin >> id[i];
 }
// section 2: select one of these IDs to delete
 cout << "Which student ID do you want to delete? ";
 cin >> removeid;
// section 3: search for the position of the specified ID number
 position = -1;
 for (i = 0; i < num; i++) {
    if (removeid == id[i]) {
        position = i;
    }
 }
 if (position == -1) { // if a matching id is not found
    cout << "ID " << removeid << " is not in the array\n";
 } else {
// section 4: shuffle array elements to the left
    for (i = position; i < num - 1; i++) {
        id[i] = id[i+1];
    }
 num--; // one less ID number in the array
 }
// section 5: display the array
 cout << "\nHere is the full list of ID numbers\n";
    for (i = 0; i < num; i++) {
        cout << id[i] << " ";
    }
 cout << endl;
}