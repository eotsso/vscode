#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */

string s1; 

cout << "Enter full name: " << endl; 
getline(cin, s1);

//cout << s1[0] << endl; //First letter of FIRST NAME 

int s1Length; 

int i = 0;

while(s1[i] != '\0')
	i = i + 1; 

	cout << "Length of first name is: " << i << endl; 


//cout << s1[0] << endl;
cout << "Error if this is the only thing that prints." << endl; 
   return 0;
}



// http://www.cplusplus.com/reference/string/string/front/
//sentiel symbol for string is \0 
