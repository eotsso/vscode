#include <iostream>
#include <string>
using namespace std;

void MakeSentenceExcited(string& sentenceText) {

   unsigned int i; //Loop index
   /* Your solution goes here  */
   for (i = 0; i < sentenceText.size(); i++) 
      {
         if (sentenceText.at(i) == '.')
            sentenceText.at(i) = '!'; //I made an error in which I put ==, when it should be =. 
      }

}

int main() {
   string testStr;

   getline(cin, testStr);
   MakeSentenceExcited(testStr);
   cout << testStr;

   return 0;
}

/*
CHALLENGE ACTIVITY
5.11.2: Modify a string parameter.
Complete the function to replace any period by an exclamation point. Ex: "Hello. I'm Miley. Nice to meet you." becomes:
"Hello! I'm Miley! Nice to meet you!"
*/
