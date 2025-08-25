// 3.7_Separating_Interface_from_Implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This is an implementation file that shows the interface of a class and separates it from the implementation. This one is only for demonstration purposes. 
// The other two files are the ones that matter and can be inspected.

#include <iostream>
#include "GradeBook.h"
using namespace std;


int main()
{
	//create two GradeBook objects
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");


	//display initial value of courseName for GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// interface of a class is like a manual that tells you how to use it. It includes the class name, its public member functions, and any public data members.
//To create the executable GradeBook application, the last step is to 
//1. The object code for the main fucntion
//2. the object code for class GradeBook's member-fucntions implementations and 
//3. the C++ Standard Library object code for the C++ classes used by the scall-implementation programmer and the client-code programmer.

//