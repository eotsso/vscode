#include <iostream>
#include <string>

using namespace std;

int main() {
   
   /* Type your code here. */
   string userPass;
   int i;
   
   cin >> userPass;
   
   for (i = 0; i < userPass.size(); i++) 
   {
      if (userPass.at(i) == 'i') 
         userPass.at(i) = '1'; 
      else if (userPass.at(i) == 'a') 
         userPass.at(i) = '@'; 
      else if (userPass.at(i) == 'm') 
         userPass.at(i) = 'M'; 
      else if (userPass.at(i) == 'B') 
         userPass.at(i) = '8'; 
      else if (userPass.at(i) == 's') 
         userPass.at(i) = '$'; 
   }
   
   
   
   cout << userPass << "!" << endl;


   return 0;
}

/*
Many user-created passwords are simple and easy to guess. Write a program that takes a simple password and makes it stronger by replacing characters using the key below, and by appending "!" to the end of the input string.

i becomes 1
a becomes @
m becomes M
B becomes 8
s becomes $
Ex: If the input is:

mypassword
the output is:

Myp@$$word!

*/
