//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program writes three friends to a file.

//include the iostream directive.
#include <iostream>
#include <fstream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    string Friend1 = "";
    string Friend2 = "";
    string Friend3 = "";
    std::cin >> Friend1;
    std::cin >> Friend2;
    std::cin >> Friend3;
    ofstream outputFile;
    outputFile.open("lab5.txt");
    outputFile << Friend1 <<endl;
    outputFile << Friend2 <<endl;
    outputFile << Friend3 <<endl;
    outputFile.close();

    std::cout << "complete" << std::endl;
    return 0;
}