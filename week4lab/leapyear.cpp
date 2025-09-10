//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program determines if an input year is a leap year.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int year = 0;
    std::cin >> year;
    int fourhuncheck = year % 400;
    int fourcheck = year % 4;
    int huncheck = year % 100;
    string leap = "error";

    if (fourhuncheck == 0 || (fourcheck == 0 && huncheck != 0)){
        leap = " is";
    }
    else{
        leap = " is NOT";
    }
    std::cout << "the year you entered ";
    std::cout << year;
    std::cout << leap;
    std::cout << " a leap year" << std::endl;

    return 0;
}