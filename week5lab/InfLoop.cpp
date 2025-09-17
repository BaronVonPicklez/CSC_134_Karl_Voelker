//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program is an infinite loop.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int x = 2;
    while (x = 2) {
        std::cout << "this is infinite\n" << std::endl;
    }

    return 0;
}