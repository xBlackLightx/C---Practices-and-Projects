//GradeBook.h
//GradeBook class definition in a separate file from main (program).
#include <iostream>
#include <string> 
//using namespace std; we donot do this in header files to avoid name conflicts.



class GradeBook
{
public: 
	//constructor initializes courseName with string supplied as argument
	explicit GradeBook (std::string name)
		: courseName(name) //member initializer
	{
		//empty body
	}

	void setCourseName(std::string name)
	{
		courseName = name; //store the course name in the object
	}
	std::string getCourseName() const //const marks the function as read-only
	{
		return courseName; //return object's courseName
	}

	//display a welcome message to the GradeBook user
	void displayMessage() const
	{
		std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;

	}
private:
		std::string courseName; //course name for this GradeBook

}; //end class GradeBook
