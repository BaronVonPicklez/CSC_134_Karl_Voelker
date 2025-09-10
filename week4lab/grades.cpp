//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program calculates the letter grade from inputs of averages.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    char lettergrade = 'E';

    std::cin >> val1 >> val2 >> val3;

    int avg = (val1 + val2 + val3) / 3;
    if (avg < 101 && avg > 89){
        lettergrade = 'A';
        std::cout << "the letter grade is: ";
        std::cout << lettergrade << std::endl;
    }
    else if (avg < 90 && avg > 79){
        lettergrade = 'B';
        std::cout << "the letter grade is: ";
        std::cout << lettergrade << std::endl;
    }
    else if (avg < 80 && avg > 69){
        lettergrade = 'C';
        std::cout << "the letter grade is: ";
        std::cout << lettergrade << std::endl;
    }
    else if (avg < 70 && avg > 59){
        lettergrade = 'D';
        std::cout << "the letter grade is: ";
        std::cout << lettergrade << std::endl;
    }
    else if (avg < 60 && avg >= 0){
        lettergrade = 'D';
        std::cout << "the letter grade is: ";
        std::cout << lettergrade << std::endl;
    }
    else{
        std::cout << "ERROR, Invalid Input.";
    }

    return 0;
}