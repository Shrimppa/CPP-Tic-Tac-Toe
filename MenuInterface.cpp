#include "MenuInterface.h"
#include <iostream>

using namespace std;

void MenuInterface::DisplayInterface()
{
	cout << "Welcome to the Tic-Tac-Toe program, Developed in C++!\n\n";
	cout << "Enter your choice between these options!\n";
	cout << "> Choose Player (1)\n";
	cout << "> Choose Row (2)\n";
	cout << "> Choose Column (3)\n";
	cout << "> Place Mark (4)\n";
	cout << "> Quit (5)\n\n";
}

int MenuInterface::GetMenuChoice()
{
	int choice;
	cout << "\n\n";
	cin >> choice;
	return choice;
}