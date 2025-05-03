#include <iostream>
using namespace std;

int func(int n, int index);
 
int i;
int number[20], result[20];
 
int main() {
cout << "Enter 5 integer numbers: ";
for (i = 0; i < 5; i++) {
cin >> number[i];
}
cout << "The results are: ";
for (i = 0; i < 5; i++) {   
result[i] = func(number[i], i);
cout << result[i] << " ";
}
cout << endl;
}

int func(int n, int index){
    if (index % 2 == 0){
        return n + 3;
    }
    return n / 2;
}
 