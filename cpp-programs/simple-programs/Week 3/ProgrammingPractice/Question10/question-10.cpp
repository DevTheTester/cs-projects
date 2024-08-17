#include <iostream>
#include <cmath>
using namespace std;

const double G = 6.6743 * pow(10, -11);
const double M = 5.972 * pow(10, 24);
const double m = 7.34767309 * pow(10, 22);
const double r = 384400;

int main(){
    double result_f = (G * M * m) / sqrt(r);
    cout << G << endl;
    cout << M << endl;
    cout << m << endl;
    cout << r << endl;
    cout << "The force between the earth and the moon in kilograms is: " << result_f;
}