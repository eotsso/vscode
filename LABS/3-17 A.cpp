#include <iostream>
using namespace std;

int main() {
   bool passwordValid;
   string checkStr;

   /* Type your declarations here */
   cin >> checkStr;
   /* Type your additional code here */
   
   passwordValid = false;
   int digitVal = 0; 
   
   for (int i = 0; i < checkStr.size(); i++) {
      if (isdigit(checkStr.at(i)) != 0)
         digitVal = digitVal + 1; 
   }
   
   if ((checkStr.length() > 5) &&  (digitVal < 6)) // true if 7 or less numbers and input length is greater than 5)
      passwordValid = true; 


   if (passwordValid) {
      cout << "Valid" << endl;
   }
   else {
      cout << "Invalid" << endl;
   }
   
   return 0;
}
