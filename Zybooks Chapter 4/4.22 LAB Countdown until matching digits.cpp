#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */

   int userInput; 
   string stringComp;
  
	
	cin >> userInput; 
	
		
		while (userInput >= 11 && userInput <=100)
		{
			string stringComp = to_string(userInput); //stores int value into string 
			//only works* in C++ 11, so it will NOT work out the box for DEV-C++ 
			//DEV-C++ out the box runs GCC 4.9.2, so change it via Tools -> Compiler Options _> Settings -> Code generation 
			// --> Language standard -std --> select C++ 11; 
			
			if (stringComp.at(0) == stringComp.at(1)) 
			{
				cout << userInput << " ";
				cout << endl;
				return 0;
			}
			else if (stringComp.at(0) != stringComp.at(1))
			{
				cout << userInput << " ";
				userInput--; 
			}	
			
		}
		
      if (userInput < 11 || userInput > 100) 
         cout <<  "Input must be 11-100";
         
		cout << endl;
		
		
   return 0;
}


/*
4.22 LAB: Countdown until matching digits
Write a program that takes in an integer in the range 11-100 as input. The output is a countdown starting from the integer, and stopping when both output digits are identical. Note: End with a newline.

Ex: If the input is:

93
the output is:

93 92 91 90 89 88
Ex: If the input is:

11
the output is:

11
Ex: If the input is:

9
or any value not between 11 and 100 (inclusive), the output is:

Input must be 11-100
For coding simplicity, follow each output number by a space, even the last one.

Use a while loop. Compare the digits; do not write a large if-else for all possible same-digit numbers (11, 22, 33, …, 99), as that approach would be cumbersome for larger ranges.

*/

