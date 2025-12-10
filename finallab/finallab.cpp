//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program determines where a fella lands after being shot out of a cannon.

//include the iostream directive.
#include <iostream>
#include <cmath>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    double a = -0.01568;
    double b = 1.00000;
    double c = 1.5;
    double minuseqn;
    double pluseqn;

    double fcn = pow(b,2) - 4*a*c;

    minuseqn = (-b - sqrt(fcn))/(2*a);
    pluseqn = (-b + sqrt(fcn))/(2*a);
    if (minuseqn > 0)
    std::cout << "the fella lands at: "<< minuseqn << " meters" << std::endl;
    if (pluseqn > 0)
    std::cout << "the fella lands at: "<< pluseqn << " meters" << std::endl;

    return 0;
}