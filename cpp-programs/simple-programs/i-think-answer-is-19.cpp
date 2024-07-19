#include <iostream>
using namespace std;
int a, b, result;
int main() {
 a = 24;
 b = a % 5;
 result = a + b * -1 - b / 3;
 cout << "The answer is: " << result << endl;
}