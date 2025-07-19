// First_Program.cpp : Thisfile contains the 'main' function. Program execution begins and ends there.
//This program is generated as the first tutoral for the first C++ program. 

#include <iostream>
 
int main()
{
   // std::cout << "Hello World!\n\r"; // The very first written code in C++. std::cout is used to print output to the console
   // std::cout << "Welcome";
   // std::cout << "to C++!\n"; // \n moves the cursor to the next line, \r returns the cursor to the beginning of the line. \a alarms \\'" to write one of these characters in the output.

 // Adding two integer numbers. 

	int number1 = 0; //1st number to sum and initialize it to 0.
	int number2 = 0; //2nd number to sum and initialize it to 0.
	int sum = 0; //Variable to store the sum of the two numbers and initialize it to 0.

	std::cout << "Enter the first integer: "; //prompt user for data input.
	std::cin >> number1; //read the first integer from the user into number1

	std::cout << "Enter the second integer: ";
	std::cin >> number2; //read the second integer from the user into number2

	sum = number1 + number2; //calculate the sum of the two integers and store it in the variable sum.
	std::cout << "Sum: " << sum << std::endl; //display the sum; end line

}



//cumbersome:large and difficult to move or use, slow and not effective more this meaning is used.
   //omit == Exclude
