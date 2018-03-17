/*Goal: Practice PreFix and PostFix
**
*/

#include<iostream>

using namespace std;

int main(){
    int a = 0, b = 0;
    int post = 0, pre = 0;
    cout<<"Inital values: \t\t\tpost = "<<post<<" pre= "<<pre<<"\n";
    post = a++;
    pre = ++b;
    cout<<"After one postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<" a= "<<a<<" b= "<<b<<"\n";
    post = a++;
    pre = ++b;
    cout<<"After two postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<" a= "<<a<<" b= "<<b<<"\n";  
    return 0;
}