// question2_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program valvuylates the product of three integers.

#include <iostream>
using namespace std; 

int main()
{
	int x, y, z, resultat;
	x = 0; y = 0; z = 0; resultat = 0;
	// Prompt the user for input	

	cout << "Enter three integers: ";
	cin >> x >> y >> z;

	resultat = x * y * z;

	cout << "The product is " << resultat << endl;

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
