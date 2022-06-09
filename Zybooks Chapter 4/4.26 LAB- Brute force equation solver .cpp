#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int x, y; 
   int a, b, c;
   int d, e, f;
   bool solution; 
   
   solution = true; 
   
   cin >> a;
   cin >> b;
   cin >> c;
   
   cin >> d;
   cin >> e;
   cin >> f;

    for (x = -10; x <= 10; x++) 
    {
        for (y = -10; y <= 10; y++) 
        {
        if (((a*x) + (b*y) == c) && ((d*x) + (e*y) == f))
        {
            cout << "x = " << x << ", " << "y = " << y << endl;
            solution = false; 
        }
        }
    }
   
   
   if (solution) 
      cout << "There is no solution" << endl;
   

   return 0;
}


/*
4.26 LAB: Brute force equation solver
Numerous engineering and scientific applications require finding solutions to a set of equations. Ex: 8x + 7y = 38 and 3x - 5y = -1 have a solution x = 3, y = 2. Given integer coefficients of two linear equations with variables x and y, use brute force to find an integer solution for x and y in the range -10 to 10.

Ex: If the input is:

8 7 38
3 -5 -1
the output is:

x = 3, y = 2
Use this brute force approach:

For every value of x from -10 to 10
   For every value of y from -10 to 10
      Check if the current x and y satisfy both equations. If so, output the solution, and finish.
Ex: If no solution is found, output:

There is no solution
Assume the two input equations have no more than one solution.

Note: Elegant mathematical techniques exist to solve such linear equations. However, for other kinds of equations or situations, brute force can be handy.

*/