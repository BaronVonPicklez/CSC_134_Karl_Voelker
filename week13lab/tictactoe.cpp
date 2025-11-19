//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program is tictactoe.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    bool win = false;
    int turn = 0;
    int iteration = 0;
    int testloop = 0; //used for testing program.
    string input = "";
    string top[] = {"   ", "   ", "   "};
    string center[] = {"   ","   ","   "};
    string bottom[] = {"   ","   ","   "};
    while (win != true){
        std::cout << "Here is the Current Game Board:" << std::endl;
        std::cout << top[0] << "|" << top[1] << "|" << top[2] << std::endl;
        std::cout << "-----------" << std::endl;
        std::cout << center[0] << "|" << center[1] << "|" << center[2] << std::endl;
        std::cout << "-----------" << std::endl;
        std::cout << bottom[0] << "|" << bottom[1] << "|" << bottom[2] << std::endl;
        if (turn == 0){
            std::cout << "the turn belongs to X" << std::endl;
        }
        else if(turn == 1){
            std::cout << "the turn belongs to O" << std::endl;
        }
        std::cin >> input;
        if (input == "topleft"){
            if (turn == 0 && top[0] == "   "){
                top[0] = " x ";
                turn = 1;
            }
            else if (turn == 1 && top[0] == "   "){
                top[0] = " o ";
                turn = 0;
            }
            else{
                iteration = iteration - 1;
            }
        }
        else if (input == "topcenter"){
            if (turn == 0 && top[1] == "   "){
                top[1] = " x ";
                turn = 1;
            }
            else if (turn == 1 && top[1] == "   "){
                top[1] = " o ";
                turn = 0;
            }
            else{
                iteration = iteration - 1;
            }
        }
        else if (input == "topright"){
            if (turn == 0 && top[2] == "   "){
                top[2] = " x ";
                turn = 1;
            }
            else if (turn == 1 && top[2] == "   "){
                top[2] = " o ";
                turn = 0;
            }
            else{
                iteration = iteration - 1;
            }
        }
        else if (input == "centerleft"){
            if (turn == 0 && center[0] == "   "){
                center[0] = " x ";
                turn = 1;
            }
            else if (turn == 1 && center[0] == "   "){
                center[0] = " o ";
                turn = 0;
            }
            else{
                iteration = iteration - 1;
            }
        }
        else if (input == "center"){
            if (turn == 0 && center[1] == "   "){
                center[1] = " x ";
                turn = 1;
            }
            else if (turn == 1 && center[1] == "   "){
                center[1] = " o ";
                turn = 0;
            }
            else{
                iteration = iteration - 1;
            }
        }
        else if (input == "centerright"){
            if (turn == 0 && center[2] == "   "){
                center[2] = " x ";
                turn = 1;
            }
            else if (turn == 1 && center[2] == "   "){
                center[2] = " o ";
                turn = 0;
            }
            else{
                iteration = iteration - 1;
            }
        }
        else if (input == "bottomleft"){
            if (turn == 0 && bottom[0] == "   "){
                bottom[0] = " x ";
                turn = 1;
            }
            else if (turn == 1 && bottom[0] == "   "){
                bottom[0] = " o ";
                turn = 0;
            }
            else{
                iteration = iteration - 1;
            }
        }
        else if (input == "bottomcenter"){
            if (turn == 0 && bottom[1] == "   "){
                bottom[1] = " x ";
                turn = 1;
            }
            else if (turn == 1 && bottom[1] == "   "){
                bottom[1] = " o ";
                turn = 0;
            }
            else{
                iteration = iteration - 1;
            }
        }
        else if (input == "bottomright"){
            if (turn == 0 && bottom[2] == "   "){
                bottom[2] = " x ";
                turn = 1;
            }
            else if (turn == 1 && bottom[2] == "   "){
                bottom[2] = " o ";
                turn = 0;
            }
            else{
                iteration = iteration - 1;
            }
        }
        else{
            win = false;
            if (turn == 0){
                turn = 0;
                iteration = iteration - 1;
            }
            else if (turn == 1){
                turn = 1;
                iteration = iteration- 1;
            }
            std::cout << "invalid input, try again." << std::endl;
        }
        if (iteration == 8){
            win = true;
            std::cout << "The Game has ended in a Draw." << std::endl;
        }
        else{
            iteration = iteration + 1;
        }
        //diagonal checks:
        if(top[0] == center[1] && top[0] == bottom[2] && top[0] != "   "){
            win = true;
        }
        if(top[2] == center[1] && top[2] == bottom[0] && top[2] != "   "){
            win = true;
        }
        //row checks:
        if(top[0] == top[1] && top[0] == top[2] && top[0] != "   "){
            win = true;
        }
        if(center[0] == center[1] && center[0] == center[2] && center[0] != "   "){
            win = true;
        }
        if(bottom[0] == bottom[1] && bottom[0] == bottom[2] && bottom[0] != "   "){
            win = true;
        }
        //column checks:
        if(top[0] == center[0] && top[0] == bottom[0] && top[0] != "   "){
            win = true;
        }
        if(top[1] == center[1] && top[1] == bottom[1] && top[1] != "   "){
            win = true;
        }
        if(top[2] == center[2] && top[2] == bottom[2] && top[2] != "   "){
            win = true;
        }
        //testloop = testloop + 1;
        //if (testloop == 3){
            //win = true;
        //}
    }
    std::cout << "Here is the Final Game Board:" << std::endl;
    std::cout << top[0] << "|" << top[1] << "|" << top[2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << center[0] << "|" << center[1] << "|" << center[2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << bottom[0] << "|" << bottom[1] << "|" << bottom[2] << std::endl;

    return 0;
}