//
// Created by XaveF on 5/5/2022.
//

#ifndef CSTRING_STRCAT_H
#define CSTRING_STRCAT_H

#include <iostream>
#include <cstring>                          // allowing programmer to play with its functions

using std::cout;
using std::endl;
using std::cin;

void StrCat()
{
    char firstInput[50];
    char secondInput[25];

    cout << endl << "Input characters less than 50" << endl;
    cin >> firstInput;
    cout << "Input characters less than 25" << endl;
    cin >> secondInput;
    cout << "Your input are: " << endl;
    cout << "1) " << firstInput << endl;
    cout << "2) " << secondInput << endl;
    strcat(firstInput,secondInput);
    cout << "  Concatenating second to first input..." << endl;
    cout << "    [strcat(firstInput,secondInput]" << endl;
    cout << "  Concatenated." << endl;
    cout << "1) " << firstInput << endl;
    cout << "2) " << secondInput << endl;

}


#endif //CSTRING_STRCAT_H
