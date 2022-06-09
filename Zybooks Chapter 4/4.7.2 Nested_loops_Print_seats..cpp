#include <iostream>
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
   int currentColumn;
   char currentColumnLetter;

   cin >> numRows;
   cin >> numColumns;

   /* Your solution goes here  */
   //The issue I encountered here was figuring out how to get currentColumnLetter <= numColumns to work. 
   //Since 'A' in ASCII value is 65. If the user entered 3 for numColums 65 < 3 is always false. 
   //My workaround solution is adjusting the numColumns before the nested loop. 
   //Alternatively, I could've also done currentColumnLetter <= numColumns + 64 within the for loop. 
   numColumns = numColumns + 64;
   
   for (currentRow = 1; currentRow <= numRows; currentRow++) {
      for (currentColumnLetter = 'A'; currentColumnLetter <= numColumns; currentColumnLetter++)
         cout << currentRow << currentColumnLetter  << " ";
   }

   cout << endl;

   return 0;
}
