// cin will not work for strings which have a 
// other delimiting characters like spaces
// other than \n (newline)

// So its work around is getline

#include <iostream>
#include <string>

int main(int argc,char *argv[]){
	int num;
	std::string line1;
	std::string line2;
	
	std::cout << "Enter a number";
	std::cin >> num;
	std::cout << "The number is=" << num << std::endl;
	std::cout << "Enter a string with cin";
	std::cin >> line1;
	std::cout << "The line is " << line1 << std::endl;
	std::cout << "Enter a number through getline";
	std::getline(std::cin,line2);
	std::cout << "The line is " << line2 << std::endl;
	
	return 0;
}