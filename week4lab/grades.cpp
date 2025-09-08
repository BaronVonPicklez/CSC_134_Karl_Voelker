//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program calculates the letter grade from inputs of averages.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    

    std::cin >> val1 >> val2 >> val3;

    int avg = (val1 + val2 + val3) / 3;
    if (avg < 101)and(avg > 89){
        
    }
    std::cout << "placeholder" << std::endl;

    return 0;
}