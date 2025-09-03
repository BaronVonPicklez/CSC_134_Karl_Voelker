//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program calculates Force.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    double m = 10;
    double a = 9.81 * 9.81;
    double F = m * a;

    std::cout << F << std::endl;

    return 0;
}