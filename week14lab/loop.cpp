//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;
double input = 0;
int x = 0;
bool valid = false;
int loop(int input){
    for (x = 0; x <= input; x++){
        std::cout << x << std::endl;
    }

    return 0;
}
//define the main() function/method
int main()
{
    while (valid != true){
        std::cin >> input;
        if (input < 1000){
            valid = true;
        }
        else{
            valid = false;
            std::cout << "invalid input" << std::endl;
        }
    }
    loop(input);

    return 0;
}