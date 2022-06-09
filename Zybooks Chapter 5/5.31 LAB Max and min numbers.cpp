#include <iostream>
using namespace std;

int MaxNumber(int, int, int, int); 
int MinNumber(int, int, int, int);

   int main() {
   
   int maximum, minimum, a, b, c, d; 

   cin >> a; 
   cin >> b;
   cin >> c;
   cin >> d;

   maximum = MaxNumber(a, b, c, d);
   minimum = MinNumber(a, b, c, d); 
   
   cout << "Maximum is " << maximum << endl;
   cout << "Minimum is " << minimum << endl;

   return 0;
}

/* Define your functions here */ 
int MaxNumber(int num1, int num2, int num3, int num4)
{
   int max; 
   max = num1; 
   
   if (max < num2)
      max = num2; 
   if (max < num3) 
      max = num3; 
   if (max < num4) 
      max = num4; 
   
   return max; 
}

int MinNumber(int num1, int num2, int num3, int num4)
{
   int min; 
   min = num1; 
   
   if (min > num2)
      min = num2; 
   if (min > num3) 
      min = num3; 
   if (min > num4) 
      min = num4; 
   
   return min; 
}

/*

5.31 LAB: Max and min numbers
Write a program whose inputs are four integers, and whose outputs are the maximum and the minimum of the four values.

Ex: If the input is:

12 18 4 9
the output is:

Maximum is 18 
Minimum is 4
The program must define and call the following two functions. Define a function named MaxNumber that takes four integer parameters and returns an integer representing the maximum of the four integers. Define a function named MinNumber that takes four integer parameters and returns an integer representing the minimum of the four integers.
int MaxNumber(int num1, int num2, int num3, int num4)
int MinNumber(int num1, int num2, int num3, int num4)

*/