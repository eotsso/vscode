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



//LIMITATION: I don't know how to get this to work with getline(cin, Name)

/*
Identification of lines I would use Name[0] for the first name 
- But I don't know how to isolate the last name or middle name in a dynamic way. 
- Since ASCII value for a "space" in a string is 32, maybe it has something to do with that? 


//cout << s1[0] << endl; //First letter of FIRST NAME 

int s1Length; 

int i = 0;

while(s1[i] != '\0') // while loop determines total length of string including spaces. 
	i = i + 1; 

	cout << "Length of first name is: " << i << endl; 

while(s1)

//cout << s1[0] << endl;
   return 0;
*/
