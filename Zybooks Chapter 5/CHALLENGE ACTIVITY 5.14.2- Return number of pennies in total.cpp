#include <iostream>
using namespace std;

/* Your solution goes here  */
int NumberOfPennies(int dollars, int pennies = 0) {
   int totalDollars;
   
   totalDollars = dollars * 100; 
   totalDollars = totalDollars + pennies; 
   
   return totalDollars;
}

int main() {
   cout << NumberOfPennies(5, 6) << endl; // Should print 506
   cout << NumberOfPennies(4) << endl;    // Should print 400
   return 0;
}




/*
CHALLENGE ACTIVITY
5.14.2: Return number of pennies in total.

Write a function NumberOfPennies() that returns the total number of pennies given a number of dollars and (optionally) a number of pennies. Ex: 5 dollars and 6 pennies returns 506.
*/