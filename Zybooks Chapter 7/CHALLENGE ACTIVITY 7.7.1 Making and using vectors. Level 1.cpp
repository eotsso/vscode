/*
Read integers from input and store each integer into a vector until 0 is read. Do not store 0 into the vector. Then, output all values in the vector (including the last value) each multiplied by the last value in the vector. Output each value on a new line.

Ex: If the input is 78 79 94 5 0, the output is:

390
395
470
25
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Your code goes here */
   
   vector<int> storeInt; //vector size not declared yet, will use pushback()
   int x, multi, last;
   
   multi = 1;
   cin >> x; 
   
   while(x != 0)
   {
      storeInt.push_back(x); 
      cin >> x;
   }
   
   for (int i = 0; i < storeInt.size(); i++)
   {
      last = storeInt.back();
      last = storeInt.at(i) * last; //no real reason why I chose this way, but it works. 
      cout << last << endl;
   }
   
   
   

   return 0;
}