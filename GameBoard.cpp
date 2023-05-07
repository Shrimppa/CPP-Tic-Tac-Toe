#include "GameBoard.h"
#include <iostream>
#include <list>
using namespace std;

// This class is used to format, and display the lists of strings into the tic tac toe format.

void GameBoard::displayBoard(list<string> topRow, list<string> middleRow, list<string> bottomRow) {
	cout << "-------\n";

	auto first1 = topRow.front();

	auto second1 = next(topRow.begin(), 1);

	auto third1 = topRow.back();

	cout << "|" << first1 << "|" << *second1 << "|" << third1 << "|\n";

	cout << "-------\n";

	auto first2 = middleRow.front();

	auto second2 = next(middleRow.begin(), 1);

	auto third2 = middleRow.back();

	cout << "|" << first2 << "|" << *second2 << "|" << third2 << "|\n";

	cout << "-------\n";

	auto first3 = bottomRow.front();

	auto second3 = next(bottomRow.begin(), 1);

	auto third3 = bottomRow.back();

	cout << "|" << first3 << "|" << *second3 << "|" << third3 << "|\n";

	cout << "-------\n";
}