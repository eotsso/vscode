#include <iostream>
#include <iomanip>
using namespace std;

/* Define your function here */ 
double JiffiesToSeconds(double userJiffies)
{
   return userJiffies * 0.01; 
}

int main() {
   /* Type your code here. Your code must call the function.  */
   double jiffies, totalSeconds; 
   cin >> jiffies; 
   
   totalSeconds = JiffiesToSeconds(jiffies); 
   
   cout << fixed << setprecision(3) << totalSeconds << endl;
   
   return 0;
}

/*

5.23 LAB: A jiffy
A "jiffy" is the scientific name for 1/100th of a second. Define a function named JiffiesToSeconds that takes a float as a parameter, representing the number of "jiffies", and returns a float that represents the number of seconds. Then, write a main program that reads the number of jiffies as an input, calls function JiffiesToSeconds() with the input as argument, and outputs the number of seconds.

Output each floating-point value with three digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(3); once before all other cout statements.

Ex: If the input is:

15.25
the output is:

0.152
The program must define and call a function:
double JiffiesToSeconds(double userJiffies)

*/
