#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

void main()
{
	string localString = "working fine";

	while (1)
	{
		cout << localString.c_str() << endl;
		_getch();
	}
}