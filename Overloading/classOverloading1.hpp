#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
    int findSmaller(int a,int b,int d);
    float findSmaller(float a,float b,float d);
    char findSmaller(char a,char b,char d);
    int findSmaller(int *array,int size);
    float findSmaller(float *array,int size);
    char findSmaller(char *array,int size);
    
};

int Compare::findSmaller(int *array,int size){
    int min = array[0];
    for(int i = 1;i < size;i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}
float Compare::findSmaller(float *array,int size){
    float min = array[0];
    for(int i = 1;i < size;i++){
        if(array[i] < min)
            min = array[i];
    }
    return min;
}
char Compare::findSmaller(char *array,int size){
    char min = array[0];
    for(int i = 1;i < size;i++){
        if(array[i] < min)
            min = array[i];
    }
    return min;
}
int Compare::findSmaller(int a,int b,int d){
    return (a<b)?(a<d)?a:d:(b<d)?b:d;
}
float Compare::findSmaller(float a,float b,float d){
    return (a<b)?(a<d)?a:d:(b<d)?b:d;
}
char Compare::findSmaller(char a,char b,char d){
    return (a<b)?(a<d)?a:d:(b<d)?b:d;
}
int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
