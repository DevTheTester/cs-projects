#include <iostream>
using namespace std;

int getStudentId();
bool isValidId(int id);
int getInstruction();
void insertToArray(int array[], int id, int array_size);
void deleteFromArray(int array[], int delete_id);

int main(){
    // Read array of student ID's
    const int MAX_STUDENTS = 100;
    int student_array[MAX_STUDENTS];
    int array_size = 0;

    // get student id's in ascending order
    cout << "Type in Student ID's (enter -1 to stop) in ascending order: ";
    student_array[array_size] = getStudentId();
    while (student_array[array_size] != -1){
        array_size += 1;
        student_array[array_size] = getStudentId();
    }

    // get instruction
    cout << "Enter an integer to Delete(0) Insert(1) or Quit(2):";
    int instruction = getInstruction();
    while (instruction != 2){
        if (instruction == 1){
            cout << "Enter a new ID number to insert: ";
            int new_id = getStudentId();
            if (isValidId(new_id)){
                insertToArray(student_array, new_id, array_size);
                array_size++;
            } else {
                cout << "Student ID is not valid please try again." << endl;
            }
        } else if (instruction == 0){
            cout << "Enter the ID number to delete: ";
            int delete_id = getStudentId();
            deleteFromArray(student_array, delete_id);
        }
        cout << "Enter an integer to Delete(0) Insert(1) or Quit(2):";
        instruction = getInstruction();
    }

    cout << "End of Program";
    return 0;
}

int getStudentId(){ 
    int n;
    cin >> n;
    if (n >= 100 && n <= 999){
        return n;
    } else if (n == -1) {
       return n;
    } else {
        cout << "Error reading input please try again";
        return 69;
    }
}

bool isValidId(int id){
    if (id >= 100 && id <= 999){
        return true;
    } else {
        return false;
    }
}

int getInstruction(){
    int n;
    cin >> n;
    return n;
}

void insertToArray(int array[], int id, int array_size){
    // Loop through array items until new id is less than current item
    for (int i = 0; i < array_size; i++){
        // If current item is larger than our new id
        if (id < array[i]){
            // Copy each value down one
            for (int j = array_size; j > i; j--){
                array[j] = array[j-1];
            }
            // insert the new id
            array[i] = id;
            return;
        } else if (i == array_size - 1){
            array[i + 1] = id;
            return;
        }
    }   
}

void deleteFromArray(int array[], int delete_id){

}

