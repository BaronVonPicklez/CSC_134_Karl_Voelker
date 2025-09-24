//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program loops backward from 100.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    for (int x = 100; x > 0; x--){
        std::cout << x << std::endl;
    }
    std::cout << "Complete" << std::endl;

    return 0;
}