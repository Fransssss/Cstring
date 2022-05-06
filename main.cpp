// Title: Cstring functions
// Purpose: Learn basic Cstring functions
// Author: Fransiskus Agapa
// Have fun - Enjoy the process - Practices make improvement

#include <iostream>
#include "Strcpy.h"
#include "Strncpy.h"
#include "StrCat.h"
#include "StrnCat.h"

using std::cout;
using std::endl;
using std::cin;
using std::cerr;

int main()
{
    char userChoice;
    cout << endl << " == C-String Menu ==" << endl;
    cout << "1) strcppy" << endl;
    cout << "2) strncpy" << endl;
    cout << "3) strcat" << endl;
    cout << "4) strncat" << endl;
    cout << "E) Exit" << endl;
    cout << "choice: ";
    cin >> userChoice;

    while(userChoice != 'E')
    {
        if (userChoice == '1')
        {
            StrCpy();
        } else if (userChoice == '2')
        {
            StrnCpy();
        } else if (userChoice == '3')
        {
            StrCat();
        } else if (userChoice == '4')
        {
            StrnCat();
        } else
        {
            cerr << "Invalid Output" << endl;
        }

        cout << endl << " == C-String Menu ==" << endl;
        cout << "1) strcppy" << endl;
        cout << "2) strncpy" << endl;
        cout << "3) strcat" << endl;
        cout << "4) strncat" << endl;
        cout << " E to Exit" << endl;
        cout << "choice: ";
        cin >> userChoice;
    }
    if(userChoice == 'E')
    {
        cout << "Exit Program " << endl;
    }
    return 0;
}
