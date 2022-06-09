#include <iostream>
using namespace std;

/* Define your function here */ 

int DaysInFeb(int userYear) 
{
   if (userYear == 1900) //1900 exception, not a leap year
      return 28;
   else if ((userYear % 4 == 0 && userYear % 100 == 0) || (userYear % 4 == 0))
      return 29; //leap year
   else 
      return 28; //not leapyear 
}


int main() {
   /* Type your code here. Your code must call the function. */
   int yearInput, days;
   cin >> yearInput; 
   
   days = DaysInFeb(yearInput);
   
   cout << yearInput << " has " << days << " days in February." << endl;;

   return 0;
}
