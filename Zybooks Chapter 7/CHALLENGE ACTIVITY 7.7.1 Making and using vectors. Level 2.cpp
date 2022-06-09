/*
Read integers from input and store each integer into a vector until 0 is read. Do not store 0 into the vector. Then, output all values in the vector that are less than zero in reverse order, each on a new line.

Ex: If the input is -18 -79 13 12 0, the output is:

-79
-18
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Your code goes here */
   
   vector<int> storeInt;
   int x; 
   int last;
   
   while (x != 0)
   {
      storeInt.push_back(x); 
      cin >> x;
   }  
   
   cout << storeInt.back() << endl;
   storeInt.pop_back();
   cout << storeInt.back() << endl;

   return 0;
}
