3.23 LAB: Warm up: Text message abbreviation decoder
(1) Write a program that prompts a user to enter an abbreviation. If the user's input string matches a known text message abbreviation, output the unabbreviated form, else output: Unknown. Support two abbreviations: LOL -- laughing out loud, and IDK -- I don't know. (4 pts)

If the input is:

LOL
the output is:

Input an abbreviation:
laughing out loud
If the input is:

TTYL
the output is:

Input an abbreviation:
Unknown
Note: The strings "LOL" and "TTYL" are not present in the display of the zyBook environment because both strings are inputs and therefore not part of the program output.


(2) Expand to also decode these abbreviations. (3 pts)

BFF -- best friends forever
IMHO -- in my humble opinion
TMI -- too much information


#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

   /* Type your code here. */

string userStr1; 

cout << "Input an abbreviation:" << endl;

cin >> userStr1;



   if (userStr1 == "BFF") {
      cout << "best friends forever" << endl;
}
   else if (userStr1 == "IMHO") {
      cout << "in my humble opinion" << endl;
   }
   
   else if (userStr1 == "TMI") {
      cout << "too much information" << endl;
   }
   else if (userStr1 == "LOL") {
      cout << "laughing out loud" << endl;
   }
   else if (userStr1 == "TTYL") {
      cout << "talk to you later" << endl;
   }
   else if (userStr1 == "IDK") {
      cout << "I don't know" << endl;
   }
   else 
      cout << "Unknown" << endl;
   
      
   return 0;
}

--------------------------------------

