// Question_2_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program evaluates the sum of three integers and prints the result.

#include <iostream>

using namespace std; //program uses the standard namespace

int main()
{
	int x, y, z, result; //declare variables
	x = 0; y = 0; z = 0; result = 0; //initialize variables

	cout << "Enter three integers: "; //prompt user for input
	cin >> x >> y >> z; //read three integer from user input
	
	result = (x + y + z); //calculate the sum of the three integers
	cout << "The sum is : " << result << endl; //output the result. 
	/*
	return 4; //return 4 to indicate successful execution.*/

	// Question 2.9  Added this one just below here to prevent the confusion: 

	cout << "Welcome to the world of C++."; //A welcome message to the user

	int a, b, c; //declare three integer variables
	a = 0; b = 7; c = 1; //initialize the variables

	a = b + c; //calculate the sum of b and c and store it in a

	cout <<"This program calculates the simple interest." << endl; //output a message to the user

	cout << "the values are : " << a << " " << b << " " << c << endl; //output the values of a, b, and c
	return 0; //return 0 to indicate successful execution


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
