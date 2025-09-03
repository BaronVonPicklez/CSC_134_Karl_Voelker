//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program calculates voltage.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int I = 10;
    int R = 2;
    int V = I * R;

    std::cout << V << std::endl;

    return 0;
}