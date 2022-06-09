#include <iostream>
#include <string>
using namespace std;

int main() {
   string coreGtld1;
   string coreGtld2;
   string coreGtld3;
   string coreGtld4;
   string inputName;
   string searchName;
   string theTld;
   bool isCoreGtld;
   int periodCounter;
   int periodPosition;
   unsigned int j;
   unsigned int i;
      
   coreGtld1 = ".com";
   coreGtld2 = ".net";
   coreGtld3 = ".org";
   coreGtld4 = ".info";
   theTld = "";
   isCoreGtld = false;
   periodPosition = 0;

   cout << endl << "Enter the next domain name (<Enter> to exit): " << endl;
   cin >> inputName;

   while (inputName.size() > 0) {
      searchName = inputName;
      for (j = 0; j < inputName.size(); ++j) {
         searchName.at(j) = tolower(inputName.at(j)); 
         //tolower() doesn't modify the argument and gives a return value...I'm not seeing the purpose of this. 
      }
      isCoreGtld = false;

      periodCounter = 0;
      for (i = 0; i < searchName.size(); ++i) {
         if (searchName.at(i) == '.') {
            periodCounter++;
            periodPosition = i;
         }
      }

      if ((periodCounter == 1) && (searchName.at(0) != '.')) {
         // Extract the top-level domain name starting at the period's position.
         // Ex: If searchName = "example.com", the next statement extracts ".com"
         theTld = searchName.substr(periodPosition);

         if (theTld == coreGtld1) {
            isCoreGtld = true;
         }
         else if (theTld == coreGtld2) {
            isCoreGtld = true;
         }
         else if (theTld == coreGtld3) {
            isCoreGtld = true;
         }
         else if (theTld == coreGtld4) {
            isCoreGtld = true;
         }
         else {
            isCoreGtld = false;
         }
      }
        //isCoreGtld is now identified to have one of the .com/.net.org.info domains so it's a...
        //valid top-level domain 

        //furthermore, because periodCounter is == 1, this means there's only one period, indicating...
        //it's also a "second-level domain" with a single name. 
      cout << "\"" << inputName << "\" ";
      if (isCoreGtld) {
         cout << "is a second-level domain followed by a core gTLD of \"" <<
                 theTld << "\"." << endl;
      }
      else {
         cout << "is not a second-level domain followed by a core gTLD." << endl;
      }

      cout << endl << "Enter the next domain name (or <Enter> to exit): " << endl;
      inputName = "";
      cin >> inputName;
   }

   return 0;
}


/*
zyDE 4.13.1: Validate domain names.
A top-level domain (TLD) name is the last part of an Internet domain name like .com in example.com. A core generic top-level domain (core gTLD) is a TLD that is either .com, .net, .org, or .info. A second-level domain is a single name that precedes a TLD as in apple in apple.com

The following program uses a loop to repeatedly prompt for a domain name, and indicates whether that domain name consists of a second-level domain followed by a core gTLD. An example of a valid domain name for this program is apple.com. An invalid domain name for this program is support.apple.com because the name contains two periods. The program ends when the user presses just the Enter key in response to a prompt.

Run the program and enter domain names to validate. Note that even valid input is flagged as invalid.
Change the program to validate a domain name. A valid domain name for this program has a second-level domain followed by a core gTLD. Run the program again.

*/