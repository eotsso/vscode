#include <iostream>
using namespace std;

void cubeByValue( int );

int main()
{
    int number = 5;

    cout << "number :" << number << endl;

    cubeByValue(number); //passes arguement "number", which is 5

    cout << "cube: " << number << endl; //prints 5...why? because the f-n call is passed by value 

    return 0;
}

void cubebyValue ( int n) //passed by value (there is no &)
{
    n = n * n * n;
}