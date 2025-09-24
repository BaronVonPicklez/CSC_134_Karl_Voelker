//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program loops to a number input by the user.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int y = 0;
    std::cin >> y;
    for (int x = 0; x < y; x++){
        std::cout << x << std::endl;
    }
    std::cout << "Complete" << std::endl;

    return 0;
}