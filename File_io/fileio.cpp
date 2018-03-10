#include <iostream>
#include <fstream>
#include <string>

int main(int argc,char *argv[]){
	std::string line;
	// Writing to the file
	std::ofstream myfile1("input.txt",std::ios::app);
	if(myfile1.is_open()){
		myfile1<<"Appending a newline."<<std::endl;
		myfile1<<"Another line."<<std::endl;
		myfile1.close();
	}
	else{
		std::cout<<"Unable to open the file."<<std::endl;
		return -1;
	}
	// Reading from the file
	std::ifstream myfile0("input.txt");
	if(myfile0.is_open()){
		while(getline(myfile0,line)){
			std::cout<<line<<std::endl;
		}
		myfile0.close();
	}else{
		std::cout<<"Unable to open the file for reading."<<std::endl;
	}
	return 0;
}