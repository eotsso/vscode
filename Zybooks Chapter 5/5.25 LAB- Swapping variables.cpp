#include <iostream>
using namespace std;

/* Define your function here */ 
void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4)
{
   int store1, store2, store3, store4;
   store1 = userVal1; 
   store2 = userVal2;
   store3 = userVal3;
   store4 = userVal4;
   
   userVal1 = store2;
   userVal2 = store1;
   userVal3 = store4;
   userVal4 = store3; 
   //userVal1,2,3,4 will also update the main programs a, b, c, d because it's passed by reference. 
}

int main() {
   /* Type your code here. Your code must call the function.  */
   int a, b, c, d;
   cin >> a;
   cin >> b;
   cin >> c;
   cin >> d;
   
   SwapValues(a, b, c, d);
   cout << a << " " << b << " " << c << " " << d << endl;
   return 0;
}

/*
5.25 LAB: Swapping variables
Define a function named SwapValues that takes four integers as parameters and swaps the first with the second, and the third with the fourth values. Then write a main program that reads four integers from input, calls function SwapValues() to swap the values, and prints the swapped values on a single line separated with spaces.

Ex: If the input is:

3 8 2 4
function SwapValues() returns and the main program outputs:

8 3 4 2
The program must define and call a function:
void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4)
Function SwapValues() swaps the values referenced by the parameters.
*/

