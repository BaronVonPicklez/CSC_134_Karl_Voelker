//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program calculates average july temperature.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    double NYCRise = 85 + (85 * .02);
    double DenRise = 88 + (88 * .02);
    double PhoRise = 106 + (106 * .02);
    double JulyRise = (NYCRise + DenRise + PhoRise) / 3;

    std::cout << JulyRise << std::endl;

    return 0;
}