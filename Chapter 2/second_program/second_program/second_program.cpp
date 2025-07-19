// second_program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Comparing two integer using if statement. 

#include <iostream>

using namespace std; // program uses the entire std namespace, easier to declare at some point but requires to be careful with name conflicts.

using std::cout; //program uses cout from the std namespace
using std::cin; //program uses cin from the std namespace
using std::endl; //program uses endl from the std namespace


int main()
{
	int number1 = 0; // first integer to compare
	int number2= 0; // second integer to compare

	cout << "Enter to integer to compare : ";
	cin >> number1 >> number2; // read two integers from user input

	if (number1 == number2)
		cout << number1 << " == " << number2 << endl;

	if (number1 != number2)
		cout << number1 << " != " << number2 << endl;


	if (number1 < number2)
		cout << number1 << " < " << number2 << endl;


	if (number1 > number2)
		cout << number1 << " > " << number2 << endl;


	if (number1 <= number2)
		cout << number1 << " <= " << number2 << endl;

	if (number1 >= number2)
		cout << number1 << " >= " << number2 << endl;

	//Answers of question 2.3:
	int c, thisIsAVariable, q76354, number; //a

	cout << "Enter an integer: ";
	cin >> number; //b

	int age = 0; // variable to store age
	age = number; // assign the value of number to age
//answer of c is above 
	if (number != 7)
		cout << "The variable number is not equal to 7"; //answer of d 
		
	cout << "This is a C++ program"<< endl ; //e 
	cout << "This is a C++ \nprogram" << endl; //f
	cout << "This \nis \na \nC++ \nprogram" << endl; //g
	cout << "This\tis\ta\tC++\tprogram" << endl; //h

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
