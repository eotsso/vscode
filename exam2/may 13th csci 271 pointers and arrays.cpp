Passing Arrays to Functions -- Contd

Write a function that accepts an integer array x of size s and returns the sum of array elements.

int Sum(int x[], int s)
{
    int i, sum;

    sum = 0;

    for (i = 0; i < s; i++)
    sum += x[i];
}

#include <iostream>
#include <iomainip>
using namespace std;

void modifyArray (int[], int); //array data type, array size
                                //arrays by default are passed by reference, and the size is passed by value
void modifyElement (int) //accepts int value
                         //passed by value

int main()
{
    const int arraySize() = 5; //size of array a
    int a [arraySize] = {0, 1, 2, 3, 4}; //initialize and declared small arrays

    cout << "Effects of passing array by reference: " 
    << "\n\n..."
}

//output original array element
for (int i = 0; i < arraySize; i++)
{
    cout <<setw (3) << a[i];
}
------------------

float Smallest(float [], int);

main()
{
    const int size = 10;
    float a[size], min;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a decimal number:  ";
        cin >> a[i];
    }

    min = Smallest(a, size); //f-n call

    cout << "\nThe smallest array element is " << min << endl;

    getch();
    return 0
}


float Smallest(float b[], int s) //remember arrays are referenced, int s is by value
{
    float smallest = b[0];

    for (int i = 0; i < s; i++)
        if(b[i] < smallest)
            smallest = b[i];

    return smallest; 
}

-----------



POINTERS

Pointer -- a data type capable of storing memory addresses of other variables.
5 Basic Operations on Pointers

1. Declare

int* a; //a is delcared as a pointer to an integer. So int a here is going to hold a memory address of a variable.
float* b; //b is declared as a pointer to a float. 
double* c; 
char* d;
bool* e; 

Declare + Initalize

    There is ONLY one value that a pointer variable that can be explicitly initialized to: NULL (0)

    int* a = NULL; // indicates that this pointer is pointing to nothing.

    float* b = 0; //same as NULL. 

3. Assign:

    int* a, b = 2; //a has a GBG value at the moment. 

    //& is a memory address operator 
    a = & b; //'a' is recieving the address of 'b'.
             //so it's NOT explicitedly a = b, but rather a = &b (memory address of b)
                            //so a becomes a POINTER to b. as denoted as *a (star x)
    *a = -3; //the value of *a doesn't change because it is a memory location.
            //what this does is it changes the value of b. 
                //so now b is = -3.

4. READ: not possible

5. Print:

cout << a; //prints out memory addresses in hexadecimal form. 


#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int * x; 
    int a = 4; 

    cout << x; 
}

OUTPUT: 0; //system placed NULL as a garbage value into the pointer variable x


#include <iostream>
#include <conio.h>

using namespace scanf

main()
{
    int * x; 
    int a = 4; 

    cout << x;

    x = & a; //x (&a) ----> a|*x (4)

    cout << x; 
}

OUTPUT: 
0x1
0x22fe44 //address of the variable a; 

#include <iostream>
#include <conio.h>

using namespace scanf

main()
{
    int * x; 
    int a = 4; 

    cout << x;

    x = & a; //x (&a) ----> a|*x (4)

    cout << x; 

    cout << * x << endl; //will print 4. 

    * a = 12;

    cout << a; //will print ...? 

}


main()
{
    int * a, b = 4, c = 7;

    a = & b; //assigned memory address of b to a. 

    cout << * a << endl; //prints 4

    *a = 10; //a address remains the exact same, but since a points to b, now b = 10.

    a = & c; // now NO MORE association with b, now memory address is attached to c. 

    * a = 20; //value of c is now 20. 

    c = 52;

    cout << * a; //because memory address refers to c, will print out 52. 

}


EXAM 2: 1 exercise on pointers, and need to produce correct output.


main()
{
    int a[4] = {2,4,6,8};

    cout << a << endl; //what happens here when u output JUST the array name?
                       //since array is implemented as a pointer, it'll print out the first
                        //memory location of &a[0]

}