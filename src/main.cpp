/************************************************************************
 Program:       Football Scores
 Author:        Randall Rowland (https://github.com/rowland007)
 Date:          2023-09-10
 Description:   Asks end users how many and type of scores, then the program
                calculates the final score.
 Input:
 Output:
 Known bugs:
 Missing features:
 License:       Attribution-NonCommercial 4.0 International (CC BY-NC 4.0)
 Modifications:
   Date                      Comment
 ---------   ------------------------------------------------
 2023SEP10   Refactored code from C to C++
 ************************************************************************/
#include "FootballScore.h"
#include <iostream>
#include <exception>

int main() {

    FootballScore *TampaBay = new FootballScore();
    FootballScore* Minnesota = new FootballScore();
    int input = 0;

    std::cout << "How many touchdowns did Tampa Bay get: ";
    std::cout << "How many extra points did Tampa Bay get: ";
    std::cout << "How many 2pt conversions did Tampa Bay get: ";
    std::cout << "How many field goals did Tampa Bay get: ";
    std::cout << "How many safeties did Tampa Bay get: ";


    std::cout << "How many touchdowns did Minnesota get: ";
    std::cout << "How many extra points did Minnesota get: ";
    std::cout << "How many 2pt conversions Minnesota get: ";
    std::cout << "How many field goals did Minnesota get: ";
    std::cout << "How many safeties did Minnesota get: ";

    std::cout << "The Final Score:" << std::endl;
    std::cout << "Tampa Bay: " << TampaBay->getFinalScore() << " - " << "Minnesota: " << Minnesota->getFinalScore();

    return 0;
}