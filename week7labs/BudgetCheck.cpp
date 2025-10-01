//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program takes a user's inputs to define whether they have exceeded their budget.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    bool done = false;
    
    int budget = 0;
    int expenses = 0;
    int allexpenses = 0;
    int isdone = 0;
    int amount = 0;
    std::cout << "Please enter your budget for the month." << std::endl;
    std::cin >> budget;
    std::cout << "Please enter all expenses of the month." << std::endl;
    while (done == false){
        std::cin >> expenses;
        allexpenses = allexpenses + expenses;
        std::cout << "are you done? if yes, type 1. if no, type 0 and input a new expense." << std::endl;
        std::cin >> isdone;
        if(isdone == 0){
            done = false;
        }
        else if(isdone == 1){
            done = true;
        }
        else{
            std::cout << "Error. please input another expense." << std::endl;
        }
    }
    if (budget > allexpenses){
        std::cout << "you are UNDER Budget by: ";
        amount = budget - allexpenses;
        std::cout << amount << std::endl;
    }
    else if (budget == allexpenses){
        std::cout << "you are ON Budget" << std::endl;
    }
    else{
        std::cout << "you are OVER Budget by: ";
        amount = allexpenses - budget;
        std::cout << amount << std::endl;
    }
}