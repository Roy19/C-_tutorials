#include <iostream>


int main(int argc,char *argv[]){
	int day;
	
	std::cin >> day;
	switch(day){
		default:break;
		case 0:
			std::cout << "Caesar Salad" << std::endl;
			break;
		case 1:
			std::cout << "Mixed Green Salad" << std::endl;
			break;
		case 2:
		case 3:
			std::cout<< "Cobb Salad" << std::endl;
			break;
		case 4:
			std::cout << "Veggie Salad" << std::endl;
			break;
	}
	return 0;
}