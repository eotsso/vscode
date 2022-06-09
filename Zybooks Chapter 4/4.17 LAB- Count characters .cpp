#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   //So the code wants me to iterate through the string and identify the number of times a letter shows up
   
   string sentence;
   char letter;
   int i, letterCounter; 
   
   cin >> letter; 
   getline (cin, sentence); 
   //cin >> sentence; FIXME: This does NOT work on all tests because this will only grab the first word. 

   
   letterCounter = 0;
   for (i = 0; i < sentence.size(); i++) 
   {
      if (sentence.at(i) == letter) 
      {
         letterCounter++; 
      }
   }
   
   if (letterCounter == 1) 
      cout << letterCounter << " " << letter << endl;
   else
      cout << letterCounter << " " << letter << "'s" << endl;
   return 0;
}

/*

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
Case matters.

Ex: If the input is:

n Nobody
the output is:

0 n's
n is different than N.

*/