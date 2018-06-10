#include "student.hpp"

// Setter function definitions
void Student::setName(std::string nameIn) {
	name = nameIn;
}
void Student::setId(int idIn) {
	id = idIn;
}
void Student::setgradDate(int date) {
	gradDate = date;
}
// Getter function definitions
std::string Student::getName() {
	return name;
}
int Student::getId() {
	return id;
}
int Student::getgradDate() {
	return gradDate;
}
// print function
void Student::print() {
	std::cout << name << " " << id << " " << gradDate;
}