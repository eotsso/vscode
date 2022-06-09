#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   /* Type your code here. */
   int numVal, numSum, counter, max;
   double average; 
   
   //cout << "Enter an integer: " << endl;
   cin >> numVal; 
   
   max = numVal; 
   
   counter = 0;
   numSum = 0; 
   while (numVal >= 0) 
   {
      numSum += numVal; 
      
      if (numVal > max) 
         max = numVal;
      
      counter++; 
      
      //cout << "Enter another integer: (enter non-positive value to exit); 
      cin >> numVal; 
   }   
   
   average = (double)numSum / counter; 
   
   cout << fixed << setprecision(2) << max << " " << average << endl;

   return 0;
}
