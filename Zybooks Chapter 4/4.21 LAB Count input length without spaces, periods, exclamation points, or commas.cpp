#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   // Add more variables as needed
   
   getline(cin, userText);  // Gets entire line, including spaces. 

   /* Type your code here. */

   int i, counterChar;
   counterChar = 0;
   
   for (i = 0; i < userText.size(); i++) {
      if (isalpha(userText.at(i)) != 0) 
         counterChar += 1; 
         
      else if (userText.at(i) == '?') 
         counterChar +=1; 
      
   }
   
   cout << counterChar << endl;  
   
   return 0;
}


/*
4.21 LAB: Count input length without spaces, periods, exclamation points, or commas
Given a line of text as input, output the number of characters excluding spaces, periods, exclamation points, or commas.

Ex: If the input is:

Listen, Mr. Jones, calm down.
the output is:

21
Note: Account for all characters that aren't spaces, periods, exclamation points, or commas (Ex: "r", "2", "?").
*/
