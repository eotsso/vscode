#include <iostream>
#include <string>
using namespace std;

int main() {
   
   /* Type your code here. */
   string userPass;
   int i;
   
   for (i = 0; i < userPass.size(); i++) 
   {
      if (userPass.at(i) == 'i') 
         userPass.at(i) = 1; 
      else if (userPass.at(i) == 'a') 
         userPass.at(i) = '@'; 
      else if (userPass.at(i) == 'm') 
         userPass.at(i) = 'M'; 
      else if (userPass.at(i) == 'B') 
         userPass.at(i) = '8'; 
      else if (userPass.at(i) == 's') 
         userPass.at(i) = 'S'; 
   }
   
   
   
   cout << userPass << "!" << endl;


   return 0;
}