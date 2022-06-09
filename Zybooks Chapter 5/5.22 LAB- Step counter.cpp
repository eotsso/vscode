#include <iostream>
#include <iomanip>
using namespace std;

/* Define your function here */ 
int FeetToSteps(double userFeet) 
{
   return userFeet / 2.5; //function return value is int. So it'll automatically truncate the value. 
}


int main() {
   /* Type your code here */
   double feetWalked, totalSteps;
   cin >> feetWalked;
   
   totalSteps = FeetToSteps(feetWalked); 
   
   cout << totalSteps << endl;
   return 0;
}

/*
5.22 LAB: Step counter
A pedometer treats walking 1 step as walking 2.5 feet. Define a function named FeetToSteps that takes a double as a parameter, representing the number of feet walked, and returns an integer that represents the number of steps walked. Then, write a main program that reads the number of feet walked as an input, calls function FeetToSteps() with the input as an argument, and outputs the number of steps.

Use floating-point arithmetic to perform the conversion.

Ex: If the input is:

150.5
the output is:

60
The program must define and call a function:
int FeetToSteps(double userFeet)
*/
