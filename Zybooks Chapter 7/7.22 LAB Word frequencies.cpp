/*
7.22 LAB: Word frequencies
Write a program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow. Assume that the list will always contain fewer than 20 words.

Ex: If the input is:

5 hey hi Mark hi mark
the output is:

hey - 1
hi - 2
Mark - 1
hi - 2
mark - 1
Hint: Use two vectors, one vector for the strings and one vector for the frequencies.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   vector<string> words;
   vector<int> count; 
   unsigned int size, i, j;
   string currWord = " "; 
   
   cin >> size; 
   
   words.resize(size); 
   count.resize(size);
   
   for (i = 0; i < size; i++) //reads list of words
   {
      cin >> words.at(i);
   }

   for (i = 0; i < size; i++) //to cycle through every word 
   {
      currWord = words.at(i); 
      
      for (j = 0; j < size; j++) //inner loop that compares currWord to every word and increments int vector
      {
         if (currWord == words.at(j)) 
            count.at(i)++; 
      }
      
      cout << words.at(i) << " - " << count.at(i) << endl;
   }

   return 0;
}
