/*

CHALLENGE ACTIVITY
7.7.1: Making and using vectors.
384664.2504448.qx3zqy7

Jump to level 1
Read integers from input and store each integer into a vector until -1 is read. Do not store -1 into the vector. Then, if the last value in the vector is odd, output the odd values in the vector, each on a new line. Otherwise, output the even values in the vector, each on a new line. Note: -5 % 2 yields -1, whereas 5 % 2 yields 1.

Ex: If the input is -77 64 -34 -43 -1, the output is:

-77
*/



#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Your code goes here */
   
   vector<int> storeNum; 
   int x; 
   
   cin >> x; //I forgot to initalize x, so it was storing 0 into the first vector, and kept printing 0 in the first line. 
   
   while (x != -1) 
   {
      storeNum.push_back(x); 
      cin >> x; 
   }
   
   if (storeNum.back() % 2 == 0) //even
   {
      for (int i = 0; i < storeNum.size(); i++)
      {
         if (storeNum.at(i) % 2 == 0) 
            cout << storeNum.at(i) << endl; 
      }
   }
   else
   {
      for (int i = 0; i < storeNum.size(); i++)
      {
         if (storeNum.at(i) % 2 != 0) //WOW...Can't use % 2 == 1 because it doesn't account for negative values. 
            cout << storeNum.at(i) << endl;
      }
   }
   
   return 0;
}