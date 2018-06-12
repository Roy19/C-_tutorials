/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog{
    string name;
    int licenseNumber;
public:
    Dog(){
        name = "NA";
        licenseNumber = 0;
    }
    Dog(int n){
        name = "NA";
        licenseNumber = n;
    }
    Dog(string nameIn){
        name = nameIn;
        licenseNumber = 0;
    }
    Dog(string nameIn,int n){
        name = nameIn;
        licenseNumber = n;
    }
    int getLicense(){
        return licenseNumber;
    }
    string getName(){
        return name;
    }
};