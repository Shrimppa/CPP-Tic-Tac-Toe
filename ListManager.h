#pragma once
#include <iostream>
#include <list>
using namespace std;

class ListManager
{
public:
	void SetUserMark();
	void MarkPosition(int column, int row);
	void InitializeLists();
	list<string> GetCurrentRowValues(int rowNumber);
protected:
	string userMark;
	list<string> _topRow;
	list<string> _middleRow;
	list<string> _bottomRow;
};

