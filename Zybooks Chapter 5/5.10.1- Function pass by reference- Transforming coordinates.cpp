#include <iostream>
using namespace std;

/* Your solution goes here  */
void CoordTransform(int& old1, int& old2, int& new1, int& new2)
{
    new1 = (old1 + 1) * 2;
    new2 = (old2 + 1) * 2;
    
}
/* 
I'm confused on why CoordTransform() had 4 different values. 
In any case, all I did was link the variables together. 
So new1 is linked with xValNew -- and new2 is linked with yValNew.
Therefore, assigning new values to them would affect main() as well. 
*/

int main() {
   int xValNew;
   int yValNew;
   int xValUser;
   int yValUser;

   cin >> xValUser;
   cin >> yValUser;

   CoordTransform(xValUser, yValUser, xValNew, yValNew);
   cout << "(" << xValUser << ", " << yValUser << ") becomes (" << xValNew << ", " << yValNew << ")" << endl;

   return 0;

   /*

   CHALLENGE ACTIVITY
5.10.1: Function pass by reference: Transforming coordinates.
Define a function CoordTransform() that transforms the function's 
first two input parameters xVal and yVal into two output parameters xValNew and yValNew. 
The function returns void. The transformation is new = (old + 1) * 2. Ex: If xVal = 3 and yVal = 4,
then xValNew is 8 and yValNew is 10.

*/
