#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   
   cin >> inputMonth;
   cin >> inputDay;

   
   if (inputMonth == "April" || inputMonth == "May") 
      cout << "Spring" << " " << endl;

   else if (inputMonth == "June") //June for Spring & Summer 
   {
   
      if (inputDay > 0 && inputDay <= 20)
         cout << "Spring" << endl;
      else if (inputDay > 20) 
         cout << "Summer" << endl;
   }
   else if (inputMonth == "July" || inputMonth == "August")
      cout << "Summer" << endl;

   else if (inputMonth == "September")
   {
	 
      if (inputDay > 0 && inputDay <= 21)
         cout << "Summer" << endl;
      else if (inputDay > 21) 
         cout << "Autumn" << endl;
   }
   else if (inputMonth == "October" || inputMonth == "November")       
         cout << "Autumn" << endl;
         
   else if (inputMonth == "December") 
	{
	
      if (inputDay > 0 && inputDay <= 20)
         cout << "Autumn" << endl;
      else if (inputDay > 20) 
         cout << "Winter" << endl;
    }
   else if (inputMonth == "January"  || inputMonth == "February")  
      cout << "Winter" << endl;
   
   else if (inputMonth == "March")
   {
	
      if (inputDay > 0 && inputDay <= 19)
         cout << "Winter" << endl;
      else if (inputDay > 19) 
         cout << "Spring" << endl;
	}

   return 0;
}
