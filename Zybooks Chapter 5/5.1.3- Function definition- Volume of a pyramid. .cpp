#include <iostream>
using namespace std;

/* Your solution goes here  */

double CalcPyramidVolume(double baseLength, double baseWidth, double pyramidHeight) {
   double volume;
  
   volume = ((baseLength * baseWidth) * pyramidHeight * (1.0/3.0)); 
                                  //CAN'T USE (DOUBLE)(1/3) // INT DIVISION ERROR 
   return volume;
}

int main() {
   double userLength;
   double userWidth;
   double userHeight;

   cin >> userLength;
   cin >> userWidth;
   cin >> userHeight;

   cout << "Volume: " << CalcPyramidVolume(userLength, userWidth, userHeight) << endl;

   return 0;
}