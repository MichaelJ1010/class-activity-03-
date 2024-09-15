#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    int maxValue = 6;
    int minValue = 1;

    srand(time(0));
    std:: cout << (rand() %(maxValue - minValue +1)) + minValue << "\n";
    std:: cout << (rand() %(maxValue - minValue +1)) + minValue << "\n";
}