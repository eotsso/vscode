#include <iostream>
using namespace std;

/* Define your function here */ 
int CalcNumCharacters(string userString, char userChar)
{
   int counter = 0;
   for (unsigned int i = 0; i < userString.size(); i++)
   {
      if (userString.at(i) == userChar)
         counter++; 
   }
   
   return counter;    
   
}

int main() {
   /* Type your code here. Your code must call the function.  */
   string userInput; 
   char letter; 
   int numLetters;
   
   cin >> letter; 
   cin >> userInput; 
   
   numLetters = CalcNumCharacters(userInput, letter); //make sure ordering matches with function parameter

   if (numLetters == 1) 
      cout << numLetters << " " << letter << endl;
   else 
      cout << numLetters << " " << letter << "'s" << endl;
   return 0;
}


/*

5.28 LAB: Count characters - functions
Write a program whose input is a character and a string, and whose output indicates the number of times the character appears in the string. The output should include the input character and use the plural form, n's, if the number of times the characters appears is not exactly 1.

Ex: If the input is:

n Monday
the output is:

1 n
Ex: If the input is:

z Today is Monday
the output is:

0 z's
Ex: If the input is:

n It's a sunny day
the output is:

2 n's
Case matters. n is different than N.

Ex: If the input is:

n Nobody
the output is:

0 n's
The program must define and call the following function that takes the input string and character as parameters, and returns the number of times the input character appears in the input string.
int CalcNumCharacters(string userString, char userChar)

*/

