//GradeBook.cpp
//GradeBook member-function definitions. This file contains implementations of the member functions prototyped in GradeBook.h
#include "GradeBook.h"
#include <iostream>
 // include defition of the GradeBook class
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name)
	: courseName(name) // member initializer to initialize courseName
{
// empty body
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string name)
{
	courseName = name; // store the course name in the object
} // end function setCourseName

// function to retrieve the course name
string GradeBook::getCourseName() const
{
	return courseName; // return object's courseName
} // end function getCourseName

// function to display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
	// cal getCourseName to get the course name, notice that we do not use the courseName directly
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}// end function displayMessage


//here we used linked functions to the class GradeBook. :: called scope resolution operator. It tells the compiler that the function is a member of the GradeBook class.
// if we did not use the scope resolution operator, the compiler would think that the function is a global function, not a member of the GradeBook class. main is a global function, so it does not need the scope resolution operator.
//loose functions cannot be used as class members. Linking functions to a class is vital. 
// Global functions cannot access private data members of a class. Only member functions can access private data members of a class. (DATA SECURITY).

