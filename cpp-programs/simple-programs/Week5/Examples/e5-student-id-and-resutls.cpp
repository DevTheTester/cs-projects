#include <iostream>
using namespace std;

int num, select, searchid, i;
int id[100], result[100];

int main() {
// section 1 : enter the student IDs
 i = 0;
 cout << "Enter the student IDs (-1 to stop)\n";
 cin >> id[i];
 while (id[i] != -1) {
    i++;
    cin >> id[i];
 }
 num = i; // record how many array positions were filled
 cout << "You entered " << num << " numbers\n";
// section 2 : enter the test result for each student
 cout << "Now enter the test result for each student\n";
 for (i = 0; i < num; i++) {
    cout << "Enter the result for " << id[i] << ": ";
    cin >> result[i];
 }
// section 3 : ask for a student ID and search for a student
 cout << "Searching for a student - enter an ID ";
 cin >> searchid;
 select = -1;
 for (i = 0; i < num; i++) { // run through the ID array
    if (searchid == id[i]) {
    select = i; // record the id array index of the match
    }
 }
 if (select < 0) { // if no match was found
    cout << "Student " << searchid << " not found\n";
 } else {
    cout << "Student " << id[select];
    cout << " has result " << result[select];
 }
}
