//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program creates a right triangle using asterisks.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int input = 0;
    int y = 0;
    std::cin >> input;
    for (int x = 0; x < input; x++){
        while (y <= x){
            std::cout << "*";
            y++;
        }
        std::cout << "" << std::endl;
        y = 0;
    }
    std::cout << "" << std::endl;

    return 0;
}