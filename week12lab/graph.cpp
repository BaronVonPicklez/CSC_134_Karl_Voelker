//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program makes a graph.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int yaxis[16]; //vertical
    int xaxis[16]; //horizontal
    int revyaxis[16];
    int xax = 0;
    int yax = 0;
    int yar = 16;
    int loop = 0;
    int ypoints = 0;
    int count = 4;
    while (yax <= 16){
        yaxis[yax] = yax;
        yax++;
    }
    while (xax <= 16){
        xaxis[xax] = xax;
        xax++;
    }
    int m = 2;
    int b = 3;
    int x[4];
    int x2 = 0;
    int y2 = 0;
    int y[4];
    while (x2 <= 4){
        x[x2] = x2;
        x2++;
    }
    while (y2 <= 4){
        y[y2] = (m * x[y2]) + b;
        y2++;
    }
    while (yar >= 0){
        revyaxis[loop] = yar;
        yar--;
        loop++;
    }
    int table[16][16];
    
    
    for (int pos:revyaxis){
        std::cout << yaxis[pos];
        std::cout << "|";
        std::cout << y[pos];
        if (table[pos] == pos){
            for (int tabs = count; tabs >= 0; tabs--){
                std::cout << "   ";
            }
            count--;
            std::cout << "X" << std::endl;
        }
        else{
            std::cout << "" << std::endl;
        }
    }

    //std::cout << yaxis[3] << std::endl;
    //std::cout << xaxis[8] << std::endl;
    //std::cout << x[3] << std::endl;
    //std::cout << y[3] << std::endl;
    //std::cout << revyaxis[3] << std::endl;
    //std::cout << "\tplaceholder" << std::endl;
    return 0;
}