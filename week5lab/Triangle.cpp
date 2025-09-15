//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program calculates the angle of a right triangle.

//include the iostream directive.
#include <iostream>
#include <cmath>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    double ThetaR = atan2(4,3);
    double ThetaD = (ThetaR/(2*3.141592653589793))*360;
    std::cout << ThetaD << std::endl;
    if (ThetaD == 53.1301){
        std::cout << "this is a 3-4-5 triangle" << std::endl;
    }
    else {
        std::cout << "this is NOT a 3-4-5 triangle" << std::endl;
    }
    return 0;
}