//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;
int input1 = 0;
int input2 = 0;
int input3 = 0;
int average = 0;
int averageValues(int input1, int input2, int input3){
    average = input1 + input2 + input3;
    average = average / 3;

    return average;
}
//define the main() function/method
int main()
{
    std::cin >> input1;
    std::cin >> input2;
    std::cin >> input3;
    averageValues(input1, input2, input3);
    std::cout << average << std::endl;

    return 0;
}