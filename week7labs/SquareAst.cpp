//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program creates a square using asterisks.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int input = 0;
    std::cin >> input;
    for (int x = 1; x <= input; x++){
        for (int innerx = 1; innerx <= input; innerx++){
            std::cout << "*";
            std::cout << "\t";
        }
        std::cout << "" << std::endl;
    }
    std::cout << "" << std::endl;

    return 0;
}