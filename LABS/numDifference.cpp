#include <iostream>
using namespace std;

int main() {
   int userBonus = 0;
   int userPoints = 0;

   cin >> userBonus; // Program will be tested with values: 15, 20, 25, 30, 35.

   if (userPoints <= 30) {
      userPoints = 10;
   }
   else {
      userPoints = 0;
   }

   cout << userPoints;

   return 0;
}
