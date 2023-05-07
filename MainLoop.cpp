#include <iostream>
#include <list>
#include "MainLoop.h"
#include "GameBoard.h"
#include "ListManager.h"
#include "UserInput.h"
#include "MenuInterface.h"
using namespace std;

void MainLoop::StartMainLoop()
{
	GameBoard board;
	ListManager list;
	UserInput input;
	MenuInterface menu;

	list.InitializeLists(); // Sets the default string values for the lists of strings.

	int x;
	int rowNumber = 1;
	int columnNumber = 1;

	do
	{
		menu.DisplayInterface();
		// Displays the main menu to the user
		
		board.displayBoard(list.GetCurrentRowValues(1), list.GetCurrentRowValues(2), list.GetCurrentRowValues(3));
		// This displays the board, and inputs 3 lists of strings with 3 values in each, they correspond to rows 1, 2, and 3 of tic-tac-toe.

		x = menu.GetMenuChoice();
		// Gets an input from the user based on the menu, and uses it below (1-5).

		if (x == 1)
		{
			list.SetUserMark(); // Sets either an 'O' or an 'X' as the string replacement prompting the user for a number between 1, and 2.

			cout << "\033[2J\033[1;1H";
		}

		if (x == 2)
		{
			rowNumber = input.getRow(); // Prompts the user for a row number between 1 and 3.

			cout << "\033[2J\033[1;1H";
		}

		if (x == 3)
		{
			columnNumber = input.getColumn(); // Prompts the user for a column number between 1 and 3.

			cout << "\033[2J\033[1;1H";
		}

		if (x == 4)
		{
			list.MarkPosition(columnNumber, rowNumber); // Uses the row, and column numbers to change the string at that location into the user's mark.

			cout << "\033[2J\033[1;1H";
		}


	} while (x != 5); // Quits the program.
}