#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
int MaxMagnitude(int userVal1, int userVal2, int userVal3)
{
   int max, num1, num2, num3;
   //made it a point to not use abs() function. 
   //purpose of num1, num2, num3 is to retain original parameter values. 
   if (userVal1 < 0) 
      num1 = userVal1 * -1; 
   else
      num1 = userVal1; 
   
   if (userVal2 < 0)
      num2 = userVal2 * -1; 
   else 
      num2 = userVal2; 
   
   if (userVal3 < 0)
      num3 = userVal3 * -1;
   else 
      num3 = userVal3; 
      
   max = num1;      
   
   if (max < num2) 
      max = userVal2; 
   
   if (max < num3) 
      max = userVal3; 
      
   if (max == userVal1 || (max * -1 == userVal1)) //seems like a bad fix, but it works. 
      max = userVal1;
   
   return max;

}

int main() {
   /* Type your code here */
   int a, b, c, maxAbsVal;
   cin >> a;
   cin >> b;
   cin >> c;
   
   maxAbsVal = MaxMagnitude(a, b, c); 
   
   cout << maxAbsVal << endl;
   
   return 0;
}

/*
5.26 LAB: Max magnitude
Write a function MaxMagnitude() with three integer parameters that returns the largest magnitude value. Use the function in the main program that takes three integer inputs and outputs the largest magnitude value.

Ex: If the inputs are:

5 7 9
function MaxMagnitude() returns and the main program outputs:

9
Ex: If the inputs are:

-17 -8 -2
function MaxMagnitude() returns and the main program outputs:

-17
Note: The function does not just return the largest value, which for -17 -8 -2 would be -2. Though not necessary, you may use the absolute-value built-in math function.

Your program must define and call a function:
int MaxMagnitude(int userVal1, int userVal2, int userVal3)
*/
