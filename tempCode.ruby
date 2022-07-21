
#include <iostream>
using namespace std;

int main ()
{
    double y = 5.0; 
    double *yPtr = NULL; //important to declare when pointers are initalized
    yPtr = &y; //stores memory address of y (not the actual value of 5)

    cout << "y:\t" << y << endl; //prints 5.0
    cout << "yPtr:\t" << yPtr << endl; //prints memory address of y
    cout << "Memory address of y: " << &y << endl; //should be the same memory address as above
    cout << "yPtr:\t" << *yPtr << endl; 
				    //dereferences and refers to 5.0, given it points to the memory address first.