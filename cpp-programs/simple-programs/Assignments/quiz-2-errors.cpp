#include <iostream>
using namespace std;

int readvalues(); // return type here should be 
void countvalues(int n);

const int MAX_VALUES = 100;
int values[MAX_VALUES], howmany[MAX_VALUES];
int main() {
  int num;
  // Section 1: read numbers with trailing value of -1
  num = readvalues();
  // Section 2: count how many times each number appears
  countvalues(num);
  // Section 3: display the results
  cout << "Here are the values and how ";
  cout << "many times each value appears:\n";
  cout << "        Values:";
  for (int i = 0; i < num; i++) { //error
    cout.width(4);
    cout << right << values[i];
  }
  cout << "\nHow many times:";
  for (int i = 0; i < num; i++) { //error
    cout.width(4);
    cout << right << howmany[i];
  }
  cout << endl;
}
int readvalues() { // error
  int i, temp;
  cout << "Enter a positive value (-1 to stop): ";
  cin >> temp;
  i = 0;
  while (temp > 0) { // error
    values[i] = temp;
    i++;
    cout << "Enter a positive value (-1 to stop): ";
    cin >> temp;
  }
  return i;
}
void countvalues(int n) {
  int i, j;
  for (i = 0; i < n; i++) { 
    howmany[i] = 0; //error
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (values[i] == values[j]) { //error
        howmany[i] += 1; //error 
      }
    }
  }
}