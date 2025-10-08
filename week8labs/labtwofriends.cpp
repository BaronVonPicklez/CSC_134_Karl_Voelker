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
    string text = "";
    bool notdone = true;
    ifstream inputFile;
    inputFile.open("friends.txt");
    while (inputFile >> text){
        cout << text << " "; 
    }
    inputFile.close();
    std::cout << "complete" << std::endl;
    return 0;
}