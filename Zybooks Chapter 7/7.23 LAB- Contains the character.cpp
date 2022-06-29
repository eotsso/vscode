/*
7.23 LAB: Contains the character
Write a program that reads an integer, a list of words, and a character. The integer signifies how many words are in the list. The output of the program is every word in the list that contains the character at least once. For coding simplicity, follow each output word by a comma, even the last one. Add a newline to the end of the last output. Assume at least one word in the list will contain the given character.

Ex: If the input is:

4 hello zoo sleep drizzle z
then the output is:

zoo,drizzle,
To achieve the above, first read the list into a vector. Keep in mind that the character 'a' is not equal to the character 'A'.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Type your code here. */
   
   unsigned size, i;
   vector<string> words; 
   char currChar;
   string tempString;
   
   cin >> size;
   
   words.resize(size); 
   
   for (i = 0; i < size; i++)
   {
      cin >> words.at(i); 
   }
   
   cin >> currChar; 
   
   for (i = 0; i < size; i++)
   {
      tempString = words.at(i); 
      
      for (unsigned int j = 0; j < tempString.size(); j++) 
      {
         if (tempString.at(j) == currChar) 
         {
            cout << tempString << ",";
            break;
         }   
      }
   }
   
   cout << endl;
   
   return 0;
}
