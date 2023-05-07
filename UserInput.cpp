#include "UserInput.h"
#include <iostream>
using namespace std;

int UserInput::getRow() 
{
    int rowNum;
    cout << "Enter the row you want to put your mark (1, 2, 3): ";
    cin >> rowNum;

	return rowNum;
}

int UserInput::getColumn()
{
    int columnNum;
    cout << "Enter the row you want to put your mark (1, 2, 3): ";
    cin >> columnNum;

    return columnNum;
}