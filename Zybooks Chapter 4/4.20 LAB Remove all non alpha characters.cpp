#include <iostream>

using namespace std;

int main() {
   
   /* Type your code here. */
   string userInput; 
   int i;
   
   getline(cin, userInput);
   
   for (i = 0; i < userInput.size(); i++) {
      if (isalpha(userInput.at(i)) != 0) 
         cout << userInput.at(i);
   }

   cout << endl;
   
   return 0;
}

/*
Write a program that removes all non alpha characters from the given input.

Ex: If the input is:

-Hello, 1 world$!
the output is:

Helloworld
*/


