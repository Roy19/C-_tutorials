#include "student.hpp"

int main()
{
	int integer1;
	float float1;
	Student student1;

	integer1 = 4; //assign a value to integer1
	float1 = 4.333; //assign a value to float1

	student1.setName("Aritra Sur Roy"); //assign a value to the student name
	student1.setId(54345); //assign a value to the student id number
	student1.setgradDate(2017); //assign a value to the student grad date

								//Let's print the values of our variables
	std::cout << "integer1 = " << integer1 << "\n";
	std::cout << "float1 = " << float1 << "\n\n";

	//There are two ways we can print the values of our class:
	//The first is to call the print function we created.
	std::cout << "Using the Student::print function\n";
	std::cout << "Student1 = ";
	student1.print();
	std::cout << "\n\n";

	//The second is to access each member of the class using the get functions
	std::cout << "Using the student access functions\n";
	std::cout << "Student1 name = " << student1.getName() << "\n";
	std::cout << "Student1 ID = " << student1.getId() << "\n";
	std::cout << "Student1 Grad Date = " << student1.getgradDate() << "\n";


	return 0;
}