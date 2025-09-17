//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program accepts ten grades and averages them.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    float input = 0;
    float avg = 0;
    float x = 0;
    while (x < 10){
        std::cin >> input;
        avg = avg + input;
        x++;
    }
    avg = avg / 10;
    std::cout << avg << std::endl;

    return 0;
}