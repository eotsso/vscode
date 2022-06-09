#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   
   cin >> inputMonth;
   cin >> inputDay;
	//FIXME* HOW TO VALIDATE A STRING AND INT VALUE??????????????? 
	//FIXED* I specified just the int range for each case. 
   
   //Checks for exact string sequence and values 1-31. DOES NOT account for lowercase months. 
   
   if ((inputMonth == "April" && (inputDay > 0 && inputDay <= 31)) || (inputMonth == "May" && (inputDay > 0 && inputDay <= 30))) 
      cout << "Spring" << endl;
         
   else if (inputMonth == "June") //June for Spring & Summer 
   {
      if (inputDay > 0 && inputDay <= 20)
         cout << "Spring" << endl;
      else if (inputDay > 20) 
         cout << "Summer" << endl;
   }
   else if ((inputMonth == "July" && (inputDay > 0 && inputDay <= 30)) || (inputMonth == "August" && (inputDay > 0 && inputDay <= 31)))
      cout << "Summer" << endl;

   else if (inputMonth == "September")
   {
      if (inputDay > 0 && inputDay <= 21)
         cout << "Summer" << endl;
      else if (inputDay > 21 && inputDay <= 30) 
         cout << "Autumn" << endl;
      else 
         cout << "Invalid" << endl; //I kept getting no output value but that's because the first else if branch is true, so the rest isn't executed.
   }
   else if ((inputMonth == "October" && (inputDay > 0 && inputDay <= 31)) || (inputMonth == "November" && (inputDay > 0 && inputDay <= 30)))       
         cout << "Autumn" << endl;
         
   else if (inputMonth == "December") 
	{
      if (inputDay > 0 && inputDay <= 20)
         cout << "Autumn" << endl;
      else if (inputDay > 20) 
         cout << "Winter" << endl;
      else 
         cout << "Invalid" << endl; //I kept getting no output value but that's because the first else if branch is true, so the rest isn't executed. 
   }
   else if ((inputMonth == "January" && (inputDay > 0 && inputDay <= 31))  || ((inputMonth == "February") && (inputDay > 0 && inputDay <= 28)))  
      cout << "Winter" << endl;
   
   else if (inputMonth == "March")
   {
      if (inputDay > 0 && inputDay <= 19)
         cout << "Winter" << endl;
      else if (inputDay > 19) 
         cout << "Spring" << endl;
	}
   else 
      cout << "Invalid" << endl; 
   
   return 0;
}
