#include <iostream>
using namespace std;

int main() {
   
   int a, b, c;
   
   a = 7;
   b = 7;
   c = 7;
   
   if (a < b && a < c)
   {
   		cout << a << endl;
   }
   else if (b < a && b < c)
   {
   		cout << b << endl;
   }
   else if (c < a && c < b)
   		cout << c << endl;

	else 
		cout << a << endl;
      
   return 0;
}
