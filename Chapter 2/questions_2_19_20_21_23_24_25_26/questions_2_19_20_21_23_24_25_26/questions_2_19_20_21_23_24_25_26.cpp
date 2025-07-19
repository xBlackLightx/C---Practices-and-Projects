// questions_2_19_20_21_23_24_25_26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    //This program three input master; sum, avg, product, smallest, largest. 
	//Q 2.19 from Deitel's C++ How to Program 9th Edition

	cout << "Beginning of 2.19" << endl;

	int x, y, z, sum, average, product, smallest, largest; //Declare variables
	x = 0; y = 0; z = 0; sum = 0; product = 0; smallest = 0;  average = 0; largest = 0; //Initialize variables

	cout << "Input three different integers: "; //Prompt user for input
	cin >> x >> y >> z; //Read three integers from user

	sum = x + y + z; //Calculate sum
	product = x * y * z; //Calculate product
	average = sum / 3; //Calculate average
	cout << "Sum is " << sum << endl;
	cout << "Average is " << average << endl;
	cout << "Product is " << product << endl; 
	
	//Determine smallest and largest
	if (x < y && y < z) { cout << "Smallest is " << x << endl; cout << "Largest is " << z << endl;}
	else if (y < x && x < z) { cout << "Smallest is " << y << endl; cout << "Largest is " << z << endl;}
	else if (y < z && z < x) { cout << "Smallest is " << y << endl; cout << "Largest is " << x << endl;}
	else if (z < y && y < x) { cout << "Smallest is " << z << endl; cout << "Largest is " << x << endl;}
	else if (z < x && x < y) { cout << "Smallest is " << z << endl; cout << "Largest is " << y << endl;}
	else if (x < z && z < y) { cout << "Smallest is " << x << endl; cout << "Largest is " << y << endl;}

	cout << "End of 2.19";

	cout << endl;
	cout << endl;

	//This program reads the values and calculates the Volume and Surface Area of a Cylinder.
	//Q 2.20 from the Deitels' C++ How to Program 9th Edition

	cout << "Beginning of 2.20" << endl;

	float radius, height, pi;
	radius = 5.4; height = 8.54; pi = 3.14159;

	cout << "The volume of the cylinder is : " << pi * radius * radius * height << endl;
	cout << "The surface area of the cylinder is :" << 2 * pi * radius * (radius + height) << endl;

	cout << "End of 2.20";

	cout << endl;
	cout << endl;

	//This program prints a box, an oval, an arrow, and a diamond. 
	//Q 2.21 from the Deitels' C++ How to Program 9th Edition

	cout << "Beginning of 2.21" << endl;

	cout << "*********" << "\t\t" << "   ***  "  << "\t\t" << "  *  " << "\t\t" << "    *    " << endl; //ln 1
	cout << "*       *" << "\t\t" << " *     * " << "\t\t" << " *** " << "\t\t" << "   * *   " << endl; //ln 2
	cout << "*       *" << "\t\t" << "*       *" << "\t\t" << "*****" << "\t\t" << "  *   *  " << endl; //ln 3
	cout << "*       *" << "\t\t" << "*       *" << "\t\t" << "  *  " << "\t\t" << " *     * " << endl; //ln 4
	cout << "*       *" << "\t\t" << "*       *" << "\t\t" << "  *  " << "\t\t" << "*       *" << endl; //ln 5
	cout << "*       *" << "\t\t" << "*       *" << "\t\t" << "  *  " << "\t\t" << " *     * " << endl; //ln 6
	cout << "*       *" << "\t\t" << "*       *" << "\t\t" << "  *  " << "\t\t" << "  *   *  " << endl; //ln 7
	cout << "*       *" << "\t\t" << " *     *" << "\t\t" << "  *  " << "\t\t" << "   * *   " << endl; //ln 8
	cout << "*********" << "\t\t" << "   ***  " << "\t\t" << "  *  " << "\t\t" <<  "    *    " << endl; //ln 9

	cout << "End of 2.21";

	cout << endl;
	cout << endl;

	
	//This program prints reads three integers and prints them as largest or smallest.
	//Q 2.23 from the Deitels' C++ How to Program 9th Edition
	
	cout << "Beginning of 2.23" << endl;
	
	int a = 5;
	int b = 10;
	int c = 15;



	//Determine smallest and largest
	if      ( a < b && b < c) { cout << "Smallest is " << a << endl; cout << "Largest is " << c << endl; }
	else if ( a < c && c < b) { cout << "Smallest is " << a << endl; cout << "Largest is " << b << endl; }
	else if ( b < c && a < a) { cout << "Smallest is " << b << endl; cout << "Largest is " << a << endl; }
	else if ( b < a && a < c) { cout << "Smallest is " << b << endl; cout << "Largest is " << c << endl; }
	else if ( c < b && b < a) { cout << "Smallest is " << c << endl; cout << "Largest is " << a << endl; }
	else if ( c < a && a < b) { cout << "Smallest is " << c << endl; cout << "Largest is " << b << endl; }

	cout << "End of 2.23";

	cout << endl;
	cout << endl;


	//This program reads an integer and determines if it is div with three 
	//Q 2.24 from the Deitels' C++ How to Program 9th Edition

	cout << "Beginning of 2.24" << endl;
	int three = 0;


	cout << "Please enter a number" << endl;
	cin >> three; 

	if (three %3 == 1 || three %3 == 2)
		cout << "Number is not divisible with three " << endl;
	else cout << "Number is divisible with threee" << endl;


	cout << "End of 2.24";


	cout << endl;
	cout << endl;

	
	//This program reads two integer values and determines if the first one is factor of the second.
	// //Q 2.24 from the Deitels' C++ How to Program 9th Edition

	cout << "Beginning of 2.25" << endl;
	int first, second;
	first = 0; second = 0;

	cout << "Enter two integers: " << endl;
	cin >> first >> second;


	if (first == 0) cout << "You cannot enter zero as a value for the first number " << endl;
	else if (second % first == 0) cout << "The first number is a factor of the second " << endl;
	else cout << "sorry no result"<< endl; 


	cout << "End of 2.25";

	cout << endl;
	cout << endl;



	//This program is a trial for making an output optimized in terms of codes used. 
	//Q 2.26 from the Deitels' C++ How to Program 9th Edition

	cout << "Beginning of 2.26" << endl;

	std::cout << "* * * * * * * *" << endl; //ln1
	std::cout << " * * * * * * * *" << endl; //ln2
	std::cout << "* * * * * * * *" << endl; //ln3
	std::cout << " * * * * * * * *" << endl; //ln4
	std::cout << "* * * * * * * *" << endl; //ln5
	std::cout << " * * * * * * * *" << endl; //ln6
	std::cout << "* * * * * * * *" << endl; //ln7
	std::cout << " * * * * * * * *" << endl; //ln8

	cout << "\n \n second one \n";

	cout << "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *" << endl;

	cout << "\nEnd of 2.26";

	cout << endl;
	cout << endl;

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
