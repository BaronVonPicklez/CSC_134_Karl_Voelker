//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int size = 5;
    int grade[size];
    int input = 0;
    int sum = 0;
    int avg = 0;
    grade[0] = 10;
    grade[1] = 10;
    grade[2] = 10;
    grade[3] = 10;
    grade[4] = 10;
    for (int x2 = 0; x2 < size; x2++){
        sum = sum + grade[x2];
    }
    std::cout << sum << std::endl;

    return 0;
}