#include <iostream>
#include <string>

auto fx = [] (std::string msg) {	//creates a lambda expression that returns a string
	return msg + '\n'; };

int main(int argc,char *argv[]) {
	if (argc == 2)
		std::cout << "hello " << fx(argv[1]);
	else
		std::cout << "hello world" << std::endl;
	return 0;
}