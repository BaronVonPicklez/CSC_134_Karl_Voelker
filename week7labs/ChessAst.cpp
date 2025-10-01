//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program prints a series of asterisks in the pattern of a chessboard.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int input = 0;
    std::cin >> input;
    for (int x = 1; x <= input; x++){
        for (int innerx = 1; innerx <= input; innerx++){
            int mod = x % 2;
            if(mod == 1){
                std::cout << "*";
                std::cout << " ";
            }
            else{
                std::cout << " ";
                std::cout << "*";
                if(innerx == 1){
                    innerx++;
                }
            }
        }
        std::cout << "" << std::endl;
    }
    std::cout << "" << std::endl;

    return 0;
}