//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

int input = 0;
int square = 0;
int squareNumber(int input){
    square = input * input;

    return square;
}
//define the main() function/method
int main()
{
    std::cin >> input;
    squareNumber(input);
    std::cout << square << std::endl;
    return 0;
}
