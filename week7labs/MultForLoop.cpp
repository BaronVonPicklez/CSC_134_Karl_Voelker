//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program uses nested for loops to print out a multiplication table.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    for (int x = 1; x <= 10; x++){
        for (int innerx = 1; innerx <= 10; innerx++){
            int tablepos = x * innerx;
            std::cout << tablepos;
            std::cout << "\t";
        }
        std::cout << "" << std::endl;
    }

    return 0;
}