#include <iostream>
using namespace std;

void printAsteriks(int n);

int main(){
    int n = 9999;
    printAsteriks(n);
}

void printAsteriks(int n){
    for (int i = 0;i < n; i++){
        cout << "*";
    }
}