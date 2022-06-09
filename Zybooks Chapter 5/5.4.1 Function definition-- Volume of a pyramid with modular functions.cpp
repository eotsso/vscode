#include <iostream>
using namespace std;

double CalcBaseArea(double baseLength, double baseWidth) {
   return baseLength * baseWidth;
}

/* Your solution goes here  */
double CalcPyramidVolume(double baseLength, double baseWidth, double pyramidHeight)
{
    double pyramidVolume;

    pyramidVolume = CalcBaseArea(baseLength, baseWidth) * pyramidHeight * (1.0/3.0
    
    return pyramidVolume; 
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

/*
CHALLENGE ACTIVITY
5.4.1: Function definition: Volume of a pyramid with modular functions.

Define a function CalcPyramidVolume() with double data type parameters baseLength, baseWidth, and pyramidHeight,
that returns as a double the volume of a pyramid with a rectangular base. 
CalcPyramidVolume() calls the given CalcBaseArea() function in the calculation.

Relevant geometry equations:
Volume = base area x height x 1/3
(Watch out for integer division).


*/
