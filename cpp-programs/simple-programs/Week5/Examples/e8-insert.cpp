#include <iostream>
using namespace std;

int num, newid, position, i;
int id[100]; //NB: the array must have extra space!

int main() {
// section 1: enter five student IDs in the correct order
 cout << "Enter five student IDs in the correct order\n";
 num = 5;
 for (i = 0; i < num; i++) {
    cout << "Enter ID number " << i+1 << ": ";
    cin >> id[i];
 }
// section 2: enter a new ID
 cout << "Now enter a new student ID ";
 cin >> newid;
// section 3: search for the correct position to insert
 i = 0;
 while (newid > id[i]) {
    i++;
    if (i == num) {
        break;
    }
 }
 position = i;
// section 4: shuffle to the right – start at the end
 for (i = num; i > position; i--) {
    id[i] = id[i-1];
 }
// section 5: insert the new ID number
 id[position] = newid;
 num++;
// section 6: display the array including the new ID number
 cout << "\nHere is the full list of ID numbers\n";
 for (i = 0; i < num; i++) {
    cout << id[i] << " ";
 }
 cout << endl;
}