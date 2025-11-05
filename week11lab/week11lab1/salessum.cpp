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
    int count = 0;
    int sale = 0;
    int loop = 0;
    int counter = 0;
    int sum = 0;
    bool notdone = true;
    ifstream inputFile;
    ifstream inputFile2;
    inputFile.open("sales.txt");
    inputFile2.open("sales.txt");
    while(inputFile >> count){
        counter++;
    }
    int size = counter;
    int sales[size];
    while (inputFile2 >> sale){
        sales[loop] = sale;
        loop++;
    }
    inputFile.close();
    inputFile2.close();
    for (int x = 0; x < size; x++){
        sum = sum + sales[x];
    }
    std::cout << sum << std::endl;
    return 0;
}