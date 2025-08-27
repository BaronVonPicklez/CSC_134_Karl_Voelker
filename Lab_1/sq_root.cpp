//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program prints the square root of a number to the console.

//include the iostream directive.
#include <iostream>
#include <cmath>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int num1 = 16;
    int sqroot = sqrt(num1);

    std::cout << sqroot << std::endl;
    return 0;

}