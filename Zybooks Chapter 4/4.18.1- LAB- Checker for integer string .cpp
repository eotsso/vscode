#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string userString;
 
   
   cin >> userString;

   /* Type your code here. */
   for (int i = 0; i < userString.size(); i++) 
   {
      if (isdigit(userString.at(i)) == 0) //return value of 0 means non-digit value 
      {
         cout << "No" << endl;
         return 1;
      } 

   }
    
    cout << "Yes" << endl; 
   
   return 0;
}

//told me to #include <cctype> but I didn't use it... 

/*
4.18 LAB: Checker for integer string
Forms often allow a user to enter an integer. Write a program that takes in a string representing an integer as input, and outputs Yes if every character is a digit 0-9.

Ex: If the input is:

1995
the output is:

Yes
Ex: If the input is:

42,000
or

1995!
the output is:

No
Hint: Use a loop and the isdigit() function (don't forget to include the cctype library).
*/


/*
main.cpp: In function ‘int main()’:
main.cpp:13:22: warning: comparison of integer expressions of different signedness: ‘int’ and ‘std::__cxx11::basic_string<char>::size_type’ {aka ‘long unsigned int’} [-Wsign-compare]
   13 |    for (int i = 0; i < userString.size(); i++)
      |                    ~~^~~~~~~~~~~~~~~~~~~
    */
   