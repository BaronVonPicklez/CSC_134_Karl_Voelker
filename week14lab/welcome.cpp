//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program displays a welcome.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

void displayWelcome(){
    std::cout << "==============================" << std::endl;
    std::cout << " C++ Function Demonstration" << std::endl;
    std::cout << "==============================" << std::endl;
    std::cout << "This program shows how to use a void returning function that does not take any arguments." << std::endl;

    return;
}
//define the main() function/method
int main()
{
    displayWelcome();

    return 0;
}