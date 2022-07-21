#include <iostream>
using namespace std;

void cubeByReference (int *); //prototype

int main()
{
    int number = 5; 
    cout << "number:" << number << endl;

    cubeByReference (& number); //1. address is passed as an arguement. 

    cout << "number:" << number << endl;

    return 0;
}

void cubeByReference (int * nPtr) //pointer is initialized here in the parameter
                                  //then nPtr = &number
{
    *nPtr = *nPtr * *nPtr * *nPtr; //now the address (pointer) is dereferenced and will affect the original arguement. 
}