//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program accepts a specific user input.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    float input = 0;
    float targTemp = 212.34;
    while (input != targTemp){
        std::cin >> input;
    }
    std::cout << "The temperature has been successfully set, thank you." << std::endl;

    return 0;
}