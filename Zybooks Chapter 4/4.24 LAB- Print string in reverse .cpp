#include <iostream>

using namespace std;

int main() {

   /* Type your code here. */
   string userInput; 
   int i;
 
   
   getline (cin, userInput);
   
   while (userInput != "Done" && userInput != "done" && userInput != "d") {
      for (i = userInput.size() - 1; i >= 0; i--) {
         cout << userInput.at(i);
      }
      
      cout << endl;
      getline (cin, userInput);

      
      
   }
   
   return 0;
}
   

   /*
   4.24 LAB: Print string in reverse
Write a program that takes in a line of text as input, and outputs that line of text in reverse. The program repeats, ending when the user enters "Done", "done", or "d" for the line of text.

Ex: If the input is:

Hello there
Hey
done
then the output is:

ereht olleH
yeH
*/
