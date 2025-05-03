// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>

float square(float n);
float getHype(float n1, float n2);

int main() {
    float n1, n2, high_pot_noose;
    std::cout << "Enter 2 shortest sides to a right angled triangle: ";
    std::cin >> n1 >> n2;
    high_pot_noose = getHype(n1, n2);
    std::cout << high_pot_noose << " is length of highpotnoose";

    return 0;
}

float getHype(float n1, float n2){
    float h;
    h = sqrt(square(n1) + square(n2));
    return h;
}

float square(float n){
    return n * n;
}