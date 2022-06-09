/*
CHALLENGE ACTIVITY
7.6.2: Resizing a vector.
Resize vector countDown to have newSize elements. Populate the vector with integers {newSize, newSize - 1, …, 1}. Ex: If newSize = 3, then countDown = {3, 2, 1}, and the sample program outputs:
3 2 1 Go!
*/



#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> countDown(0);
   int newSize;
   unsigned int i;

   cin >> newSize;

   /* Your solution goes here  */
   
   countDown.resize(newSize); //added this part 
   
   for (i = 0; i < countDown.size(); ++i) //added this loop
   {
      countDown.at(i) = newSize; 
      newSize--;
   }

   for (i = 0; i < countDown.size(); ++i) {
      cout << countDown.at(i) << " ";
   }
   cout << "Go!" << endl;

   return 0;
}