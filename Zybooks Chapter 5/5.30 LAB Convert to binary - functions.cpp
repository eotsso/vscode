//I CANNOT BELIEVE THIS WORKS. 
/* Things I learned
1. string size declaration:
string s(N, X), where N = string size, and X = a character that it'll be filled with. 

2. converting data type int to string using to_string() function #include <string>
string intToString = to_string(remaining);

Reminder that when iterating through a string in reverse
for (int i = userString.size() - 1 ; i >= 0; i--), the -1 is neccessary to be within range
*/
//The part that threw me off is returning a string value for the IntToReverseBinary() function. 
#include <iostream>
#include <string>
using namespace std;

/* Define your functions here */ 
string IntToReverseBinary(int integerValue) 
{
   int remaining;
   int counter; //counter for string size.
   int integerValueReal;
   integerValueReal = integerValue; 
   string intToString;
   
   
   counter = 0;
   while (integerValue > 0) //the only purpose is the counter incrementation to determine length of string 
   {
      integerValue = integerValue / 2; //successive division to find binary in reverse
      counter++; 
   }
   
   
   string reversedStr(counter, 'X'); //counter comes in play for determining string size s1(N, C) 
      for (int i = 0; i < counter; i++)
      {
         if (integerValueReal > 0) 
         {
            remaining = integerValueReal % 2; //remaining variable is int value of 0 or 1
            intToString = to_string(remaining);
            reversedStr.at(i) = intToString.at(0); //position(0) because intToString will always be 0 or 1 in string format
            integerValueReal = integerValueReal / 2;
         }
      }
   
   return reversedStr;
}

string StringReverse(string userString) //reversedStr is a data type string being passed to userString. 
{
      //creating a new string that is the same size and looping backwards while storing the values in the new string
      //very roundabout method, but it doesn't use anything outside the scope of what is taught so far. 
      int newStringSize; 
      int j; //newStringSizeCounter
      newStringSize = userString.size();
      string newStringBinary(newStringSize, 'X'); 
      
   
   j = 0;
   for (int i = userString.size() - 1 ; i >= 0; i--) //starts at the far right //STRINGSIZE - 1 when iterating backwards
   {
        newStringBinary.at(j) = userString.at(i);
        j++;
      
   }
   
   return newStringBinary;
}

int main() {
   /* Type your code here. 
      Your code must call IntToReverseBinary() to get
      the binary string of an integer in a reverse order.
      Then call StringReverse() to reverse the string 
      returned from IntToReverseBinary().*/
      
      int userNum;
      string reversedBinary; 
      string correctBinary;
      cin >> userNum;
      
      reversedBinary = IntToReverseBinary(userNum); 
      correctBinary = StringReverse(reversedBinary); 
      
      cout << correctBinary << endl;
      
      
      

   return 0;
}

/*

5.30 LAB: Convert to binary - functions
Write a program that takes in a positive integer as input, and outputs a string of 1's and 0's representing the integer in binary. For an integer x, the algorithm is:

As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2
Note: The above algorithm outputs the 0's and 1's in reverse order. You will need to write a second function to reverse the string.

Ex: If the input is:

6
the output is:

110
The program must define and call the following two functions. Define a function named IntToReverseBinary() that takes an int as a parameter and returns a string of 1's and 0's representing the integer in binary (in reverse). Define a function named StringReverse() that takes a string as a parameter and returns a string representing the input string in reverse.

string IntToReverseBinary(int integerValue)
string StringReverse(string userString)

*/
