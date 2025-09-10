//@author: Karl Voelker
//@date: 8/27/2025
//@purpose: this program determines if an input is a vowel or consonant.

//include the iostream directive.
#include <iostream>

//use the standard namespace
using namespace std;

//define the main() function/method
int main()
{
    char letter;
    string result = "undef";
    std::cin >> letter;
    letter = tolower(letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ){
        result = "Vowel";
    }
    else if (letter == ){
        result = "Consonant";
    }
    else{
        result = "error";
    }
    std::cout << result << std::endl;

    return 0;
}
//'b' || 'c' || 'd' || 'f' || 'g' || 'h' || 'j' || 'k' || 'l' || 'm' || 'n' || 'p' || 'q' || 'r' || 's' || 't' || 'v' || 'w' || 'x' || 'y' || 'z'