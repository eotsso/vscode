#include <iostream>
using namespace std;

/* Your code goes here */

void OutputVal(int num1, int num2) 
{
   int result; 
   result = 1; 
   while ((num1 < 0) && (num1 <= num2))
   {
      result *= num1;
      num1++; 
   }
   
   cout << result << endl;
}

int main() {
   int number1;
   int number2;

   cin >> number1;
   cin >> number2;
   OutputVal(number1, number2);

   return 0;
}

/*

CHALLENGE ACTIVITY LEVEL 2
5.6.3: Functions with loops.
384664.2504448.qx3zqy7

Define a function OutputVal() that takes two integer parameters and outputs the product of all negative integers starting with the first and ending with the second parameter. If no negative integers exist, product is 1. End with a newline. The function does not return any value.

Ex: If the input is -4 7, then the output is:

24

*/