#include "ListManager.h"
#include <iostream>
#include <list>
using namespace std;

void ListManager::SetUserMark() // Sets the player, either player 1 or player 2.
{
    int player;
    cout << "Enter what player you are marking for (ie. 1, 2): ";
    cin >> player;

    if (player == 1)
    {
        userMark = "O";
    }
    else if (player == 2)
    {
        userMark = "X";
    }
}

void ListManager::InitializeLists() // Starts out the game with a blank slate
{
    list<string> defaultRow = { "*", "*", "*" };

    _topRow = defaultRow;
    _middleRow = defaultRow;
    _bottomRow = defaultRow;
    userMark = "*";
}

list<string> ListManager::GetCurrentRowValues(int rowNumber) // Returns a list of strings based off of the row you want to look at.
{
    if (rowNumber == 1)
    {
        return _topRow;
    }
    else if (rowNumber == 2)
    {
        return _middleRow;
    }
    else if (rowNumber == 3)
    {
        return _bottomRow;
    }
}

void ListManager::MarkPosition(int column, int row) // This changes one of the strings in the list of strings, and replaces it with
                                                    // a player's mark being either an "O" or an "X", it goes between 3 rows, and 3 columns.
{

    list<string> newRow = {};
    
    list<string> currentRow = GetCurrentRowValues(row);

    auto firstColumn = currentRow.front();

    auto secondColumn = next(currentRow.begin(), 1);

    auto thirdColumn = currentRow.back();

    if (column == 1 && firstColumn == "*")
    {
        string first = userMark;
        newRow.push_back(first);
    }
    else
    {
        newRow.push_back(firstColumn);
    }

    if (column == 2 && *secondColumn == "*")
    {
        string second = userMark;
        newRow.push_back(second);
    }
    else
    {
        newRow.push_back(*secondColumn);
    }

    if (column == 3 && thirdColumn == "*")
    {
        string third = userMark;
        newRow.push_back(third);
    }
    else
    {
        newRow.push_back(thirdColumn);
    }

    if (row == 1)
    {
        _topRow = newRow;
    }
    else if (row == 2)
    {
        _middleRow = newRow;
    }
    else if (row == 3)
    {
        _bottomRow = newRow;
    }
}