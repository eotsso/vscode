# include <iostream>
using namespace std;

int main()
{
	int age = 50; 
	int *agePtr; //declare a pointer "agePtr"

	agePtr = &age; //assigns variable "age" memory address to pointer variable "agePtr"

	cout << "age:\t" << age; 
	cout << endl;
	cout << "agePtr:\t" << agePtr << endl; //will print memory address of "age"
										//this is because agePtr hasn't been dereferenced.

    cout << "memory address of age" << &age << endl; 

	return 0;
}