//
// Created by XaveF on 5/5/2022.
//

#ifndef CSTRING_STRNCAT_H
#define CSTRING_STRNCAT_H

#include <iostream>
#include <cstring>                // allowing programmer to play with its functions

using std::cout;
using std::endl;
using std::cin;

void StrnCat()
{
    char firstInput[50];
    char secondInput[25];
    int lenChar = 0;

    cout << endl << "Input characters less than 50" << endl;
    cin >> firstInput;
    cout << "Input characters less than 25" << endl;
    cin >> secondInput;
    cout << "Input number of characters you'd like to concatenate" << endl;
    cin >> lenChar;
    cout << "Your input are: " << endl;
    cout << "1) " << firstInput << endl;
    cout << "2) " << secondInput << endl;
    cout << "  Concatenating with the length/number of characters..." << endl;
    cout << "    [strncat(firstInput,secondInput,lenChar)]" << endl;
    strncat(firstInput,secondInput,lenChar);
    cout << "  Concatenated." << endl;
    cout << "The input are: " << endl;
    cout << "1) " << firstInput << endl;
    cout << "2) " << secondInput << endl;

}
#endif //CSTRING_STRNCAT_H
