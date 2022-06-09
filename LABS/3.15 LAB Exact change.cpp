#include <iostream>
using namespace std;

int main() {

   int Quarters, Dimes, Nickels;
   int numQuarters, numDimes, numNickels;
   int totalChange; 
   
   Quarters = 25;
   Dimes = 10;
   Nickels = 5; 
   //No need for pennies 
   
   //if (totalChange % 100 == 0 || totalChange < 0) //accounts for full dollar values and ends program here
     // cout << "No Change" << endl; 
     // return 0;
   
    numQuarters = (totalChange / Quarters); //int values round down
   
   
   if (numQuarters == 1) 
         cout <<  numQuarters << " Quarter" << endl; 
   else if (numQuarters > 1) 
         cout << numQuarters << " Quarters" << endl; 
   
  
   totalChange = totalChange % Quarters; // store remaining amount after quarters have been calculated.  
         
   numDimes = (totalChange / Dimes); // int value rounds down and calculates number of dimes 
      
   if (numDimes == 1)   
      cout << numDimes << " Dime" << endl; 
   else if (numDimes > 1)
      cout << numDimes << " Dimes" << endl;
      
      
   totalChange = totalChange % Dimes; // store remaining change after dimes have been calculated. 
   
   numNickels = (totalChange / Nickels); // int value rounds down and calculates number of nickels needed)
   
   if (numNickels == 1) 
      cout << numNickels << " Nickel" << endl;
   else if (numNickels > 1) 
      cout << numNickels << " Nickels" << endl;
   
   totalChange = (totalChange % Nickels); // store remaining change after nickels have been calculated
   
   if (totalChange == 1)   //no need to do further calculations because the value of 0-4 will remain. 
      cout << totalChange << " Penny" << endl;
   else if (totalChange > 1) 
      cout << totalChange << " Pennies" << endl; 
   
   
   
   return 0;
}
