#include <iostream>
using namespace std;

/* Your code goes here */
int FindLargestValue() 
{
   int inputVal, largestVal;
   cin >> inputVal;
   largestVal = inputVal; 
   
   while (inputVal > 0) 
   {
      if (largestVal < inputVal)
         largestVal = inputVal;     
         
      cin >> inputVal;
   }
   
   return inputVal;
}


int main() {
   int maxVal;
   
   maxVal = FindLargestValue();
   
   cout << maxVal << endl;
   
   return 0;
}