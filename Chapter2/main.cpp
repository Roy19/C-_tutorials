#include <iostream>

int main(int argc,char *argv[]){
	int x;
	std::cin >> x;
	if(x < 7 && x % 2 ==1 ){
		std::cout << "is < 7 and odd." << std::endl;
	}else{
		std::cout << "is not the condition specified." << std::endl;
	}
	return 0;
	
}