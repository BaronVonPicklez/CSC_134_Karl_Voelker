//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program reads an array and averages it.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int size = 10;
    int grade[size];
    int input = 0;
    int sum = 0;
    int avg = 0;
    for (int x = 0; x < size; x++){
        cin >> input;
        grade[x] = input;
    }
    for (int x2 = 0; x2 < size; x2++){
        sum = sum + grade[x2];
    }
    avg = sum / size;
    std::cout << avg << std::endl;

    return 0;
}