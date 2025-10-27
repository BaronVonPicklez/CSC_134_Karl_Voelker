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
    int sale = 0;
    int loop = 0;
    bool notdone = true;
    ifstream inputFile;
    inputFile.open("sales.txt");
    int size = inputFile;
    int sales[size];
    while (inputFile >> sale){
        cout << sale; 
        sales[loop] = sale;
        loop++;
    }
    inputFile.close();
    std::cout << "complete" << std::endl;
    return 0;
}