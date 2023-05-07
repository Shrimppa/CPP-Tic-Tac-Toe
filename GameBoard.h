#pragma once
#include <iostream>
#include <list>
using namespace std;

class GameBoard
{
public:
	void displayBoard(list<string> topRow, list<string> middleRow, list<string> bottomRow);
};