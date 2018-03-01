#include <iostream>

int main(int argc,char *argv[]){
	short s = -4;
	unsigned short my_us = -5;	//Error
	
	int i = 3;
	int big_num = 27394323415;	//Error
	
	long latitude = 2300943234;
	unsigned long lat = 2300943234;

	double pi = 3.14159;
	int p = pi;
	
	bool day_ends_in_y = true;
	
	std::cout << "s=" << s << std::endl;
	std::cout<< "my_us=" << my_us << std::endl;
	std::cout << "i=" << i << std::endl;
	std::cout << "big_num=" << big_num << std::endl;
	std::cout << "latitude=" << latitude << std::endl;
	std::cout << "lat=" << lat << std::endl;
	std::cout << "pi=" << pi << std::endl;
	std::cout << "p=" << p << std::endl;
	std::cout << "day_ends_in_y=" << day_ends_in_y << std::endl;
	return 0;
}