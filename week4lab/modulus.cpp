//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program determines if an input is even or odd.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int val = 0;

    std::cin >> val;

    string modcheck = "Error";
    int mod = val % 2;
    if (mod == 0){
        modcheck = "even";
    }
    if (mod == 1){
        modcheck = "odd";
    }

    std::cout << "this number is: ";
    std::cout << modcheck << std::endl;

    return 0;
}