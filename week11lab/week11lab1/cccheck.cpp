//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program.

//include the iostream directive.
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <string>


//use the standard namespace
using namespace std;

//test card nums:
//4012888888881881
//5500000000000004
//340000000000009

//define the main() function/method
int main()
{
    int size = 16;
    int CCN[size] = {4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int reverseCardNum[size] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4};
    int mod10num = 0;
    int checkdig = 0;
    for(int index = 1; index <= 16; index += 2){
        reverseCardNum[index] = reverseCardNum[index] * 2;
    }
    for(int i = 0; i < size; i++){
        mod10num = reverseCardNum[i] + mod10num;
    }
    checkdig = mod10num % 10;
    if(checkdig == 0){
        std::cout << "Credit card ";
        for(int L = 0; L < size; L++){
            std::cout << CCN[L];
        }
        std::cout << " is Valid." << std::endl;
    }
    else{
        std::cout << "Credit card ";
        for(int C = 0; C < size; C++){
            std::cout << CCN[C];
        }
        std::cout << " is NOT Valid." << std::endl;
    }
            
    std::cout << "placeholder" << std::endl;

    return 0;
}