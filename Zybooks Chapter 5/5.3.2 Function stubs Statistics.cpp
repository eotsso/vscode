#include <iostream>
using namespace std;

/* Your solution goes here  */
int GetUserNum() //seems like no argument needs to be added here because in line 24, 25...
{
   cout << "FIXME: Finish GetUserNum()"<< endl;
   
   return 0.0;
}

double ComputeAvg(int userNumOne, int userNumTwo)
{
   cout << "FIXME: Finish ComputeAvg()" << endl;
   
   return -1;
}

int main() {
   int userNum1;
   int userNum2;
   int avgResult;

   userNum1 = GetUserNum();
   userNum2 = GetUserNum();

   avgResult = ComputeAvg(userNum1, userNum2);

   cout << "Avg: " << avgResult << endl;

   return 0;
}

/*

CHALLENGE ACTIVITY
5.3.2: Function stubs: Statistics.
Define stubs for the functions called by the below main(). Each stub should print "FIXME: Finish FunctionName()" followed by a newline, and should return -1. Example output:
FIXME: Finish GetUserNum()
FIXME: Finish GetUserNum()
FIXME: Finish ComputeAvg()
Avg: -1

*/
