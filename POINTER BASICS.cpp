#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int* x;                    //pointer x is declared
	int a = 4; 

	cout << x << endl;                 //prints a RANDOM memory address value because pointer not assigned. 

	x = &a;                            //pointer x is assigned memory address of int 'a'. 

	cout << x << endl;                 //prints out memory address of variable a. 

	cout << *x << endl;                //known as "dereferencing", will print out 4. 

	*x = 12; 



}