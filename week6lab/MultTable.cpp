//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program makes a multiplication table.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int input = 0;
    std::cin >> input;
    for (int x = 0; x <= 12; x++){
        int tableVal = input * x;
        std::cout << tableVal << std::endl;
    }
    std::cout << "Complete" << std::endl;

    return 0;
}