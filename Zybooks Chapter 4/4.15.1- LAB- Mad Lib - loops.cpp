#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   string input; 
   const string INPUT_QUIT = "quit";
   int x; 
   
   //cout << "Enter a word: " << endl;
   cin >> input; 
   
   //cout << "Enter an integer: " << endl;
   cin >> x; 
   
   while (input != INPUT_QUIT) 
   {
      cout << "Eating " << x << " " << input << " a day keeps you happy and healthy." << endl;
      
      //cout << "Enter a new word: " << endl; 
      cin >> input;
      
      //cout << "Enter a integer: " << endl;
      cin >> x;
   }
      
   
   return 0;
}
