//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program calculates the increase in sales from a 6% increase to a membership fee.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    int MainMembership = 250000;
    int CurrentMembership = 250000;
    for(int x = 1; x <= 5; x++){
        CurrentMembership = CurrentMembership + (CurrentMembership * 0.06);
        std::cout << CurrentMembership << std::endl;
    }
    //std::cout << CurrentMembership << std::endl; idk if i need this to display at the end if it already displays the final within the for loop itself.

    return 0;
}