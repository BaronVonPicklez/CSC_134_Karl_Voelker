//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program counts the iterations in a for loop.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int accumulator = 0;
    for (int x = 0; x <= 100; x++){
        std::cout << x << std::endl;
        accumulator++;
    }
    std::cout << "The Accumulator value is ";
    std::cout << accumulator << std::endl;

    return 0;
}