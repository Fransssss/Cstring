//
// Created by XaveF on 5/5/2022.
//

#ifndef CSTRING_STRCPY_H
#define CSTRING_STRCPY_H

#include <iostream>
#include <cstring>                             // allowing programmer to play with its functions

using std::cout;
using std::endl;
using std::cin;

void StrCpy()
{
    char firstInput[50];
    char secondInput[25];
    cout << endl << " Input characters less than 50: " << endl;
    cin >> firstInput;
    cout << " Input characters less than 25: " << endl;
    cin >> secondInput;
    cout << " Your input are: " << endl;
    cout << "1) " << firstInput << endl;
    cout << "2) " << secondInput << endl;
    cout << " Copying first to second input...." << endl;
    cout << "    [strcpy(secondInput,firstInput)]" << endl;
    cout << " Copied." << endl;
    strcpy(secondInput,firstInput);
    cout << " The input are:" << endl;
    cout << "1) " << firstInput << endl;
    cout << "2) " << secondInput << endl;
}


#endif //CSTRING_STRCPY_H
