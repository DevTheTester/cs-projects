#include <iostream>
using namespace std; 

int student_id, year_digits, year, student_mark;

int main(){
    // Read student ID
    cout << endl << "Enter the ID: "; 
    cin >> student_id;
    // Store first 2 digits of ID 
    year_digits = student_id / 10000;
    // Calculate year from ID digits
    if (year_digits >= 0 && year_digits <= 50){
        year = year_digits + 2000; 
    } else if (year_digits >= 51 && year_digits <= 99){
        year = year_digits + 1900; 
    }

    // Read mark and calculate pass/fail if year > 1979
    if (year < 1980){
        cout << endl << "You must consult the archives";
    } else {

        cout << endl << "Enter the mark: ";
        cin >> student_mark;
        if (student_mark >= 50){
            cout << endl << "Student " << student_id << " passes with " << student_mark << "%"; 
        } else {
            cout << endl << "Student " << student_id << " fails with " << student_mark << "%";
        }

    }
    cout << endl << endl; // In my terminal 2 endlines creates a nice bottom space
}   