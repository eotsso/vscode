/*
7.21 LAB: Adjust list by normalizing
When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. This adjustment can be done by normalizing to values between 0 and 1, or throwing away outliers.

For this program, adjust the values by dividing all values by the largest value. The input begins with an integer indicating the number of floating-point values that follow.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

5 30.0 50.0 10.0 100.0 65.0
the output is:

0.30 0.50 0.10 1.00 0.65 
The 5 indicates that there are five floating-point values in the list, namely 30.0, 50.0, 10.0, 100.0, and 65.0. 100.0 is the largest value in the list, so each value is divided by 100.0.

For coding simplicity, follow every output value by a space, including the last one.


*/


#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

   /* Type your code here. */
   unsigned int size, i;
   float max;
   vector<float> userVal;
   
   cin >> size; 
   
   userVal.resize(size);
   
   max = 0;
   for (i = 0; i < userVal.size(); i++) //reads float values into a float vector, and assigns max. 
   {
      cin >> userVal.at(i);
      
      if (userVal.at(i) > max)
         max = userVal.at(i);
   }
   
   for (i = 0; i < userVal.size(); i++) //normalizes all values by dividing all values by max. 
   {
      userVal.at(i) = userVal.at(i) / max; 
   }

   
   for (i = 0; i < userVal.size(); i++)
   {
      cout << fixed << setprecision(2) << userVal.at(i) << " ";
   }
   
   cout << endl;
   
   return 0;
}
