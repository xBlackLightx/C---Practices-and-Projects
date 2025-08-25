// 3.6_Placing_a_Class_in_a_Separate_File_for_Reusability.cpp : This file contains the 'main' function. Program execution begins and ends there.
//When packeged properly classes can be reused in other projects, in order to do so we need to place them in separate files called header files (.h) and implementation files (.cpp).

#include <iostream>
#include <string>
#include "GradeBook.h" //include definition of class GradeBook from GradeBook.h
using namespace std;

//function main begins program execution
int main()
{
	GradeBook gradeBook1("CS101 Introduction to C++ Programming"); //create GradeBook object
	GradeBook gradeBook2("CS102 Data Structures in C++"); //create GradeBook object

	//display initial value of courseName for each GradeBook

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// User defined headers must include the double quotes " " to prevent errors. 
// SW engineering wisdom says that to suse an object of a class, the client code needs to know only what member functions to call, what 
// argumanets to provide to code needs to know only what member functions to call, what arguments to provide to each member functions and return type to expect from each member function.
//The client code does not need to know how the member functions are implemented.

//Hiding the class's implementation details from the client code is called information hiding or encapsulation.
//Section 3.7 discusses encapsulation in more detail. 