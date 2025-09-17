//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program counts to 100.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    float x = 0;
    float loopcount = 1;
    while (x < 100){
        std::cout << loopcount << std::endl;
        x++;
        loopcount++;
    }
    std::cout << "there were ";
    std::cout <<  (loopcount - 1);
    std::cout << " iterations completed" << std::endl;

    return 0;
}