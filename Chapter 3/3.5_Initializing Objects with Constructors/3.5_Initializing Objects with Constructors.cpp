// 3.5_Initializing Objects with Constructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public: 
	//constructor initializes courseName with string supplied as argument
	explicit GradeBook (string name)
		: courseName(name) // member initalizer to initialize courseName
	{
		//empty body
	}//end GradeBook constructor.

	void setCourseName(string name)
	{
		courseName = name; //store the course name in the object
	}// end function setCourseName

	//function to retrieve the course name

	string getCourseName() const
	{
		return courseName;  // return object's courseName
	}
	void displayMessage() const
	{
		cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;

	}
private: 
	string courseName; //course name for this GradeBook
		};

int main()
{
	GradeBook gradeBook1("CS101 Introduction to C++ Programming"); //an object is created. 
	GradeBook gradeBook2("CS102 Data Structures in C++");

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;

	//courseName = "CS101 C++ Programming"; // change courseName here private cannot be accessed directly nor be seen by main. It is sacred, secret.


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


//WE use constructors beucase they are necessary to initialize objects when they are created. Otherwise you need to intilialize them manually which is not optimal. 
//Constructors are actually special member functions that are automatically called when an object is created. It is not a much of a deal but important.
//Constructors have the same name as the class and do not have a return type.

// An unitialized object contains garbage values. An unitialized object is simply garbage. 
//You explicitly define a constructor that take s no arguments. 
// When constructors defined with argumants, C++ will not implicitly define a default constructor for the class.