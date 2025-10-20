//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program.

//include the iostream directive.
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int input = 0;
    ostringstream oss;
    int input2 = 0;
    double sum = 0;
    std::cin >> input;
    ofstream outputFile;
    outputFile.open("week9_lab2.txt");
    for(int x = 1; x <= input; x++){
        std::cin >> input2;
        outputFile << input2 <<endl;
        sum = sum + input2;
    }
    outputFile.close();
    oss << std::fixed << std::setprecision(2) << sum;
    std::cout << "=======================\n";
    std::cout << "Total sales: $";
    std::cout << oss.str()<<endl;
    std::cout << "=======================\n";
    std::cout << "complete" << std::endl;
    return 0;
}