//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program prints the square of numbers from 0 to 100.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    std::cout << "Number | Number Squared" << std::endl;
    std::cout << "-----------------------" << std::endl;
    for (int x = 0; x <= 100; x++){
        int x2 = (x * x);
        std::cout << x;
        std::cout << " | ";
        std::cout << x2 << std::endl;
    }
    std::cout << "Complete" << std::endl;

    return 0;
}