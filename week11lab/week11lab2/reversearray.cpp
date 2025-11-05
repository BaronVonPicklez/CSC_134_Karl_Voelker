//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program reverses an array.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int count = 0;
    int input[4];
    char buffer = '0';

    for (int x = 0; x < 5; x++){
        cin >> buffer;
        if (!isdigit(buffer)){
            x = x - 1;
            std::cout << "retry" << std::endl;
        }
        else {
            input[x] = buffer - '0';
        }
    }
    std::cout << "input complete" << std::endl;
    std::cout << input[0] << std::endl;
    std::cout << input[1] << std::endl;
    std::cout << input[2] << std::endl;
    std::cout << input[3] << std::endl;
    std::cout << input[4] << std::endl;

    std::cout << "reversing" << std::endl;
    for (int r = 4; r > -1; r--){
        std::cout << input[r] << std::endl;
    }

    return 0;
}  