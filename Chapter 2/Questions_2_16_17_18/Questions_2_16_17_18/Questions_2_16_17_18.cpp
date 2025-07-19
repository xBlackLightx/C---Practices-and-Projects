// Questions_2_16_17_18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
	//This program will take three integers as input from the user, calculate their sum and multiplication, and print the results.
	//Q2.16 from the Deitel C++ book, 9th edition.
    int x, y, z, sum, mult;
	x = 0; y = 0; z = 0; sum = 0; mult = 0;

	cout << "Enter three integers: ";
	cin >> x >> y >> z;


	sum = x + y;
	cout << "Sum of your numbers is : " << sum << "\n";
	mult = x * y * z;
	cout << "Multiplication of your numbers is : " << mult << "\n";

	cout << endl; //This will print a new line.
	cout << endl; //This will print a new line.

	//This program will give one output in three different tecniques. 
	//Q2.17 from the Deitel C++ book, 9th edition.

	cout << "1\t2\n3\t4\n5\t6\n";
	cout << "1\t" << "2\n" << "3\t" << "4\n" << "5\t" << "6\n";
	
	cout << "1\t";
	cout << "2\n";
	cout << "3\t";
	cout << "4\n";
	cout << "5\t";
	cout << "6\n";


	cout << endl; //This will print a new line.
	cout << endl; //This will print a new line.




	//This program will take two numbers from the user and compare them to find out which is smaller. 
	// Q2.18 from the Deitel C++ book, 9th edition.

	int a, b;

	cout << "Please enter two numbers:";
	cin >> a >> b;

	if (a < b)
		cout << a << " is smaller than " << b << endl;
	else if (a > b)
		cout << b << " is smaller than " << a << endl;
	else
		cout << "These numbers are equal" << endl;

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
