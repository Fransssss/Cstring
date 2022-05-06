//
// Created by XaveF on 5/5/2022.
//

#ifndef CSTRING_STRNCPY_H
#define CSTRING_STRNCPY_H

#include <iostream>
#include <cstring>                     // allowing programmer to play with its functions

using std::cout;
using std::endl;
using std::cin;

void StrnCpy()
{
    char firstInput[50];
    char secondInput[25];
    int numChar = 0;

    cout << endl << "Input characters less than 50" << endl;
    cin >> firstInput;
    cout << "Input characters more than 25" << endl;
    cin >> secondInput;
    cout << "Input number of characters you'd like to replace" << endl;
    cin >> numChar;
    cout << "Your input are: " << endl;
    cout << "1) " << firstInput << endl;
    cout << "2) " << secondInput << endl;
    cout << "  Copying with the length/number of characters..." << endl;
    cout << "    [strncpy(firstInput,secondInput,numChar)]" << endl;
    cout << "  Copied." << endl;
    strncpy(firstInput,secondInput,numChar);
    cout << "The input are " << endl;
    cout << "1) " << firstInput << endl;
    cout << "2) " << secondInput << endl;
}


#endif //CSTRING_STRNCPY_H
