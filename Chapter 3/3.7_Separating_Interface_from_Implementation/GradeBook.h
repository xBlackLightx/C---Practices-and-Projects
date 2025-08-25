#include <string>

class GradeBook
{
public:
	explicit GradeBook(std::string); //constructor initialize courseName we did not use sting name, so parameter names are optional but many programmers include them for clarity.
	void setCourseName(std::string); // sets the course name
	std::string getCourseName() const; // gets the course name
	void displayMessage() const;  // displays a welcome message

private:
	std::string courseName; // course name for this GradeBook
	};// end class GradeBook
