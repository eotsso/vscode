#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */

string firstName, middleName, lastName; 


cin >> firstName;
cin >> middleName; //can act as a lastName variable if no lastName 
cin >> lastName;

int i = 0;
while(lastName[i] != '\0') { // '\0' is the sentinel variable in strings 
   i = i + 1; 
}

if (i == 0) {// i == 0 means there's no middle name
   cout << middleName << ", " << firstName[0] << "." << endl; //middleName variable acts as a last name here
}


else if (i > 0) { // i > 0 means there is a middle name
      cout << lastName << ", " << firstName[0] << "." << middleName[0] << "." << endl; 
}


   return 0;
}
