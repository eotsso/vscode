#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;

/* Define your function here */ 
double LapsToMiles (double userLaps) 
{
   double miles; 
   miles = userLaps * 0.25; 
   
   return miles;
}

int main() {
   /* Type your code here. Your code must call the function.  */
   double numLaps, milesRan;
   cin >> numLaps; 
   
   milesRan = LapsToMiles(numLaps); 
   cout << fixed << setprecision(2) << milesRan << endl;
   return 0;
}

/*
5.21 LAB: Track laps to miles
One lap around a standard high-school running track is exactly 0.25 miles. Define a function named LapsToMiles that takes a double as a parameter, representing the number of laps, and returns a double that represents the number of miles. Then, write a main program that takes a number of laps as an input, calls function LapsToMiles() to calculate the number of miles, and outputs the number of miles.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

7.6
the output is:

1.90
Ex: If the input is:

2.2
the output is:

0.55
The program must define and call a function:
double LapsToMiles(double userLaps)
*/
