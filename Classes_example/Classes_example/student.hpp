#pragma once
#include <iostream>
#include <string>

class Student {
	int id;
	int gradDate;
	std::string name;
public:
	// Setter functions
	void setName(std::string nameIn);
	void setId(int idIn);
	void setgradDate(int date);

	// Getter functions
	std::string getName();
	int getId();
	int getgradDate();

	// print function
	void print();
};