//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program counts to a number.

//include the iostream directive.
#include <iostream>
#include <fstream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int input = 0;
    std::cin >> input;
    ofstream outputFile;
    outputFile.open("lab4.txt");
    for (int x = 0; x < input; x++){
        outputFile << x <<endl;
    }
    outputFile.close();

    std::cout << "Done Writing...." << std::endl;
    return 0;
}