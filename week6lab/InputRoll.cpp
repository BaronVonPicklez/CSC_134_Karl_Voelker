//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program rolls a number of dice input by the user.

//include the iostream directive.
#include <iostream>
#include <cmath>
#include <random>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int rollcount = 0;
    std::cin >> rollcount;
    for (int x = 0; x <= rollcount; x++){
        int roll = rand() % 6 + 1;
        std::cout << roll << std::endl;
    }
    std::cout << "Complete" << std::endl;

    return 0;
}