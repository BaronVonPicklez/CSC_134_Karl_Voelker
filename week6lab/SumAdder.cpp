//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program adds a value to a sum through a loop.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int sumOp = 0;
    int adder = 10;
    for (int x = 0; x < 50; x++){
        sumOp = sumOp + (x + adder);
        std::cout << sumOp << std::endl;
    }
    std::cout << "Complete" << std::endl;

    return 0;
}