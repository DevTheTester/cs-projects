#include <iostream>
using namespace std;

int main(){
    const int N_STUDENTS = 7;
    int student_ids[N_STUDENTS];
    int student_marks[N_STUDENTS];
    int top_student_ids[N_STUDENTS - 1];
    int top_student_marks[N_STUDENTS - 1];
    int n_top_students = 0;
    int marks_sum = 0;
    float marks_avg = 0.0;

    cout << "Enter 7 student ID's and marks: ";
    for (int i = 0; i < N_STUDENTS; i++){
        cin >> student_ids[i] >> student_marks[i];
        // student_ids[i] = 1000 - i; // For testing
        // student_marks[i] = 4 + i;
    }

    // find average mark 
    for (int i = 0; i < N_STUDENTS; i++){
        marks_sum += student_marks[i];
    }
    marks_avg = marks_sum / N_STUDENTS;

    // add students and their marks which are above average to top students arrays
    for (int i = 0; i < N_STUDENTS; i++){
        if (student_marks[i] > marks_avg){
            top_student_marks[n_top_students] = student_marks[i];
            top_student_ids[n_top_students] = student_ids[i];
            n_top_students++;
        }
    }

    // sort id's and mark by id's ascending
    for (int i = 0; i < n_top_students; i++){ // For each student
        for (int j = 0; j < n_top_students - 1 - i; j++){ // Loop through each student except last, and already sorted students
            if (top_student_ids[j] > top_student_ids[j + 1]){
                int tmp = 0;
                tmp = top_student_ids[j];
                top_student_ids[j] = top_student_ids[j + 1];
                top_student_ids[j + 1] = tmp;
                tmp = top_student_marks[j];
                top_student_marks[j] = top_student_marks[j + 1];
                top_student_marks[j + 1] = tmp;
            }
        }
    }

    cout << "Students above average mark of " << marks_avg << " in ascending order of student id:" << endl;
    for (int i = 0; i < n_top_students; i++){
        cout << "Student ID: " << top_student_ids[i] << " Mark: " << top_student_marks[i] << endl;
    }
}