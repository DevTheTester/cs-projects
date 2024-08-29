#include <iostream>
using namespace std;

bool checkcore(int core[][10], int degree, int count, int course);

int main() {
const int N_STUDENTS = 100;
 int degree, num, i, temp, corecount;
 int core[3][10];
 int courses[40], degrees[N_STUDENTS], numcore[3];

// section 1 : load the core courses for degrees 3 difrrenet core course arrays
 numcore[0] = 3;
 core[0][0] = 159101;
 core[0][1] = 161111;
 core[0][2] = 247112;
 
 numcore[1] = 3;
 core[1][0] = 345345;
 core[1][1] = 564365;
 core[1][2] = 643543;
 
 numcore[2] = 2;
 core[2][0] = 354354;
 core[2][1] = 435345;

// section 2 : for 100 students take their courses

corecount = 0;
for (int i = 0; i < N_STUDENTS; i++){
 
 //get students degree
 cout << "Enter what degree you are doing 0, 1, or 2: ";
 cin >> degree;
 //get students courses
 num = 0;
 cout << "Enter a course for this student (-1 to stop) ";
 cin >> temp;
    while (temp != -1) {
        courses[num] = temp;
        num++;
        cout << "Enter a course for this student (-1 to stop) ";
        cin >> temp;
    }
 cout << "This student is taking " << num << " courses.\n";

 // section 3 : count how many core courses
 
 for (i = 0; i < num; i++) {
    if (checkcore(core, degree, num, courses[i])) {
        corecount++;
    }
 }
 cout << corecount << " of the courses are core courses.\n";
}
 
} 

bool checkcore(int core[][10], int degree, int count, int course) {
    int i;
    for (i = 0; i < count; i++) {
        if (course == core[degree][i]) {
            return true;
        }
    }
    return false;
}
