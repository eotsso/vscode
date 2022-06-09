#include <iostream>
using namespace std;

double ConvertToInches(double numFeet) {
   return numFeet * 12.0;
}

/* Your solution goes here  */
double ConvertToInches(double numFeet, double numInches) {
   int totalInches;
   totalInches = (numFeet * 12) + numInches;
   
   return totalInches; 
}

int main() {
   double totInches;

   totInches = ConvertToInches(4.0, 6.0);
   cout << "4.0, 6.0 yields " << totInches << endl;

   totInches = ConvertToInches(5.8);
   cout << "5.8 yields " << totInches << endl;
   return 0;
}


/*
CHALLENGE ACTIVITY
5.15.2: Convert a height into inches.
Write a second ConvertToInches() with two double parameters, numFeet and numInches, that returns the total number of inches. Ex: ConvertToInches(4.0, 6.0) returns 54.0 (from 4.0 * 12 + 6.0).
*/
