//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program writes sales to a file.

//include the iostream directive.
#include <iostream>
#include <fstream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int input = 0;
    int input2 = 0;
    std::cin >> input;
    ofstream outputFile;
    outputFile.open("week9_lab1.txt");
    for(int x = 1; x <= input; x++){
        std::cin >> input2;
        outputFile << input2 <<endl;
    }
    outputFile.close();

    std::cout << "complete" << std::endl;
    return 0;
}