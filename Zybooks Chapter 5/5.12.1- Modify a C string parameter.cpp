#include <iostream>
#include <cstring>
using namespace std;

void MakeSentenceExcited(char* sentenceText) { //Modifying a C string using a pointer parameter.

   /* Your solution goes here  */
   int i;      // Loop index
   
   for (i = 0; i < strlen(sentenceText); ++i) {
      if (sentenceText[i] == '.') {
         sentenceText[i] = '!';
      }
   }
}

int main() {
   const int TEST_STR_SIZE = 50;
   char testStr[TEST_STR_SIZE];

   cin.getline(testStr, TEST_STR_SIZE);
   MakeSentenceExcited(testStr);
   cout << testStr << endl;

   return 0;
}