//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program loops to ten.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{

    for (int x = 0; x <= 10; x++){
        std::cout << x << std::endl;
    }
    std::cout << "complete" << std::endl;

    return 0;
}