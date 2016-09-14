// multiply.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>

using namespace std;

// This function prints the multiplication table up to "n".
void printTable(int n)
{
	int i, j;

	cout << 0 << "\t";
	for (i = 0; i <= n; i++)
	{
		cout << i << "\t";
	}

	cout << endl;
	for (i = 0; i <= 10; i++)
	{
		cout << i << "\t";
		for (j = 0; j <= n; j++)
			cout << i*j << "\t";
		cout << endl;

	}
}

int main()
{
	int n;
	cout << "Please enter a number: " << endl;
	cin >> n;
	printTable(n);
}

