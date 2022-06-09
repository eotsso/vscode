/*
CHALLENGE ACTIVITY
7.5.1: Printing the sum of two vector elements.
Add each element in origList with the corresponding value in offsetAmount. Print each sum followed by a space. Ex: If origList = {40, 50, 60, 70} and offsetAmount = {5, 7, 3, 0}, print:
45 57 63 70 
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> origList(NUM_VALS);
   vector<int> offsetAmount(NUM_VALS);
   unsigned int i;

   for (i = 0; i < origList.size(); ++i) {
      cin >> origList.at(i);
   }

   for (i = 0; i < offsetAmount.size(); ++i) {
      cin >> offsetAmount.at(i);
   }

   /* Your solution goes here  */
   for (i = 0; i < NUM_VALS; i++)
   {
      cout << origList.at(i) + offsetAmount.at(i) << " ";
   }

   cout << endl;

   return 0;
}