#include <iostream>
#include <cmath>                   // Note: Needed for math functions in part (3)
#include <iomanip>                 // For setprecision
using namespace std;

int main() {
   double wallHeight;
   double wallWidth;
   double wallArea;
   const double GAL_PAINT_PER_SQFT = 350;
   
   cout << "Enter wall height (feet):" << endl;
   cin  >> wallHeight;
   
   cout << "Enter wall width (feet):" << endl;
   cin >> wallWidth;              
   
   // Calculate and output wall area
   wallArea = wallHeight * wallWidth;              
   cout << fixed << setprecision(2) << "Wall area: " <<  wallArea << " square feet" << endl;  
   
   cout << fixed << setprecision(2) << "Paint needed: " << wallArea /  GAL_PAINT_PER_SQFT << " gallons" << endl;
  
   cout << "Cans needed: " << (int) ((wallArea / GAL_PAINT_PER_SQFT) + 0.5) << " can(s)" << endl;
   
   return 0;
}

//   cout << "Cans needed: " << (int) (wallArea / GAL_PAINT_PER_SQFT) << " can(s)" << endl;
