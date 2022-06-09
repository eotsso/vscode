ZYBOOK CHALLENGE PROBLEMS

3.32.2: Alphabetic replace.
Replace any alphabetic character with '_' in 2-character string passCode. Ex: If passCode is "9a", output is:
9_
Hint: Use two if statements to check each of the two characters in the string, using isalpha().

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string passCode;

   cin >> passCode;

   /* Your solution goes here  */
   
   if (isalpha(passCode.at(0))) 
      passCode[0] = '_';
   if (isalpha(passCode.at(1)))
      passCode[1] = '_';

---------------------------------------------------------

3.33.1: Rock-paper-scissors.

Write a switch statement that checks nextChoice. If 0, print "Rock". If 1, print "Paper". If 2, print "Scissors". For any other value, print "Unknown". End with newline.

#include <iostream>
using namespace std;

int main() {
   int nextChoice;

   cin >> nextChoice;

   /* Your solution goes here  */

   switch (nextChoice) {
   
   case 0:
      cout << "Rock" << endl;
      break;

   case 1:
      cout << "Paper" << endl;
      break;
      
   case 2:
      cout << "Scissors" << endl;
      break;
   
   default:
      cout << "Unknown" << endl;
      break;
   }

   return 0;
}

-------------------------------------------------------

3.33.2: Switch statement to convert letters to Greek letters.
Write a switch statement that checks origLetter. If 'a' or 'A', print "Alpha". If 'b' or 'B', print "Beta". 
For any other character, print "Unknown". Use fall-through as appropriate. End with newline.

#include <iostream>
using namespace std;

int main() {
   char origLetter;

   cin >> origLetter;

   /* Your solution goes here  */
   
switch (origLetter) { 
   case 'a': 
   case 'A':
      cout << "Alpha" << endl;
      break;
      
   case 'b': 
   case 'B': 
      cout << "Beta" << endl;
      break;
   
   default: 
      cout << "Unknown" << endl;
      break;
   
}


   return 0;
}
