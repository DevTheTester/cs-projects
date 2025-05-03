#include <iostream>
#include <fstream>
#include <cstdlib> // to use exit
#include <string>
using namespace std;
fstream file1, file2;
string filename, word;
int main() {
 filename = "word.txt";
 file1.open(filename.c_str(), fstream::in);
 if (file1.is_open() == false) {
 cout << "ERROR: not able to open " << filename << endl;
 exit(12);
 }
 filename = "modify.txt";
 file2.open(filename.c_str(), fstream::out);
 while (getline(file1, word)) {
 word = word + "ing";
 file2 << word << endl;
 }
 file1.close();
 file2.close();
}
