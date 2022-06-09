#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/* Define your function here */

string CreateAcronym(string); //prototype

int main() {
   /* Type your code here */
   string userInput, acro; 
   getline(cin, userInput);
   
   acro = CreateAcronym(userInput); 
   
   cout << acro << endl; 
   
   return 0;
}

string CreateAcronym(string userPhrase) 
{  
   int j = 0; 
   int counter = 0;
  
   //checks first letter of phrase 
   if(userPhrase.at(counter) >= 65 && userPhrase.at(counter) <= 95)
   {
       counter++; 
       userPhrase.at(counter) = '.';
       counter++; 
   }
    
   for (unsigned int i = 2; i < userPhrase.size(); i++)
   {
      if(userPhrase.at(i) == ' ') //assuming there's spaces between each individual word 
      {
         j = i + 1;     //increments 1 after identifying space, which will be the 1st letter of word 
         if(userPhrase.at(j) >= 65 && userPhrase.at(j) <= 95) //checks for uppercase
           {
            userPhrase.at(counter) = userPhrase.at(j);
            counter++;
            userPhrase.at(counter) = '.';
            counter++;
           }  
      }
      
   }
    userPhrase.erase(counter);
    return userPhrase;

}

/*

5.32 LAB: Acronyms
An acronym is a word formed from the initial letters of words in a set phrase. Define a function named CreateAcronym that takes a string parameter and returns the acronym of the string parameter. Append a period (.) after each letter in the acronym. If a word begins with a lower case letter, don't include that letter in the acronym. Then write a main program that reads a phrase from input, calls CreateAcronym() with the input phrase as argument, and outputs the returned acronym. Assume the input has at least one upper case letter.

Ex: If the input is:

Institute of Electrical and Electronics Engineers
the output should be:

I.E.E.E.
The program must define and call a function:
string CreateAcronym(string userPhrase)

Hint: Use isupper() to check if a letter is upper case.

*/