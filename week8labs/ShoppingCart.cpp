//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program writes a shopping cart to a file.

//include the iostream directive.
#include <iostream>
#include <fstream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    ofstream outputFile;
    outputFile.open("lab2.txt");
    outputFile << "*************************************" <<endl;
    outputFile << "\t\t\t Shopping Cart" <<endl;
    outputFile << "*************************************" <<endl;
    outputFile << "product code \tqty\t\tprice" <<endl;
    outputFile << "\t789\t\t\t7\t\t$12.00" <<endl;
    outputFile << "" <<endl;
    outputFile << "\t\t\t\t\t\tTotal: $84.00" <<endl;
    outputFile.close();

    std::cout << "complete" << std::endl;
    return 0;
}