#include <iostream>
#include <string>
#include <cctype>
#define endl '\n'
using namespace std;

int main() {

   /* Type your code here. */
   string userInput;
   int i, j, counter, strSize, spaceCounter;
   
   getline (cin, userInput); 
   
   i = 0;
   j = userInput.size() - 1;
   spaceCounter = 1; //value is 1 because it's because used to compare with the .size() function; 
   counter = 0;
   while (userInput.at(i) == userInput.at(j) && (j > 0) && (j <= userInput.size())) //j > 0 is required: once it's done iterating and i = 3 and j = -1: OFR
   {
      if (isspace(userInput.at(i)) == 0) //no white space;  
      {
         i++;
      }
      
      if(isspace(userInput.at(i)) != 0) //pre-checks next right value for space 
      {
      	i++; 
      	spaceCounter++; 
	  }
         
      if (isspace(userInput.at(j)) == 0) //no white space;  
      {   
         j--;
      }

      if(isspace(userInput.at(j)) != 0) //pre-checks next left value for space 
      {
      	j--; 
     	//removed a spaceCounter;  
	  }	 
	  counter++;
   }
   
   if (userInput.size() - spaceCounter == counter)
      cout << "palindrome: " << userInput << endl;
   else 
      cout << "not a palindrome: " << userInput << endl;
   
   
   
   return 0;
}
