//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program writes movies to a file.

//include the iostream directive.
#include <iostream>
#include <fstream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    ofstream outputFile;
    outputFile.open("lab1.txt");
    outputFile << "Bourne Identity" <<endl;
    outputFile << "Star Wars Episode IV" <<endl;
    outputFile << "The Hunger Games" <<endl;
    outputFile << "Dead Pool" <<endl;
    outputFile << "X-Men First Class" <<endl;
    outputFile << "Star Wars Episode V" <<endl;
    outputFile << "Get Out" <<endl;
    outputFile.close();

    std::cout << "complete" << std::endl;
    return 0;
}