//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program fails to divide by 0.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int num1 = 10;
    int quotient = num1 / 0;

    std::cout << quotient << std::endl;

    return 0;
}