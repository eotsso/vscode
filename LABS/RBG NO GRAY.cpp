#include <iostream>
using namespace std;

int main() {

   int Red, Green, Blue;
   int redOriginal, greenOriginal, blueOriginal;
 
	Red = 130;
   Green = 50;
    Blue = 130;
   
   //store original RGB values
   redOriginal = Red;
   greenOriginal = Green; 
   blueOriginal = Blue;
	
   if (Red < Green)
   {
   	
      if (Red < Blue) // Red is the smallest value in this branch
      {
         Red = Red - redOriginal;
         Green = Green - redOriginal;
         Blue = Blue - redOriginal;
      }   
   else if (Green < Red) 
      if (Green < Blue) // Green is the smallest value in this branch
         {
           Red = Red - greenOriginal;
           Green = Green - greenOriginal;
           Blue = Blue - greenOriginal; 
         }  
      else if (Red == Blue) //---Covers case in which the 2 other colors are equal to each other 
         if (Green < Blue) 
         {
           Red = Red - greenOriginal;
           Green = Green - greenOriginal;
           Blue = Blue - greenOriginal; 
         }
   else if (Blue < Red) 
      if (Blue < Green) //Blue is the smallest value in this branch 
         {
           Red = Red - blueOriginal;
           Green = Green - blueOriginal;
           Blue = Blue - blueOriginal; 
         }  
   else if (Red == Green)  //Checks case if all values are equal to each other 
      if (Green == Blue)
         {
           Red = Red - blueOriginal; //value doesn't matter if all three are equal. 
           Green = Green - blueOriginal;
           Blue = Blue - blueOriginal; 
         }
}
   
cout << Red << " " << Green << " " << Blue << endl;
   return 0;

}
