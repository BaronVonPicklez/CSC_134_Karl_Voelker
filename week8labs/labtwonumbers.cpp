//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program.

//include the iostream directive.
#include <iostream>
#include <fstream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int text = 0;
    int sum = 0;
    bool notdone = true;
    ifstream inputFile;
    inputFile.open("numbers.txt");
    while (inputFile >> text){
        cout << text << " "; 
        sum = sum + text;
    }
    inputFile.close();
    std::cout << "" << std::endl;
    std::cout << sum << std::endl;
    std::cout << "complete" << std::endl;
    return 0;
}