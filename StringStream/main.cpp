#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
	string str_num;
	float num;
	
	cout << "Enter a string";
	getline(cin,str_num);
	stringstream(str_num) >> num;
	
	cout << "The number is = " << num << endl;
	return 0;
}