#include <iostream>
#include <string> //not sure if it's needed 
using namespace std;

/* Define your function here */ 
string RemoveNonAlpha(string userString) 
{
   int j = 0; //using a second counter for the same string allows me to replace letters from the start
              //without affecting the loop. 
   for (unsigned int i = 0; i < userString.size(); i++)
   {
      if (isalpha(userString.at(i)) != 0) //indicates that current i position is alphabetic
         {
            userString.at(j)= userString.at(i); 
            j++; 
         }
   }
   userString.erase(j); //x.erase() removes all values after the fact  
   
   return userString; 
}

int main() {
   
   /* Type your code here. Your code must call the function.  */
   string input; 
   string result;
   
   getline(cin, input);
   
   result = RemoveNonAlpha(input); 
   
   cout << result << endl;


   return 0;
}


/*

5.29 LAB: Remove all non-alphabetic characters
Write a program that removes all non-alphabetic characters from the given input.

Ex: If the input is:

-Hello, 1 world$!
the output is:

Helloworld
Your program must define and call the following function that takes a string as a parameter and returns the string without any non-alphabetic characters.
string RemoveNonAlpha(string userString)

*/


