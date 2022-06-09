#include <iostream>
using namespace std;

int main() {

   int Red, Green, Blue;
   int redOriginal, greenOriginal, blueOriginal;
 
	Red = 130;
    Green = 140;
    Blue = 130;
   
   //store original RGB values
   redOriginal = Red;
   greenOriginal = Green; 
   blueOriginal = Blue;


	if (Red < Green && Red < Blue) // Red is smallest 
	{
		Red = Red - redOriginal;
        Green = Green - redOriginal;
        Blue = Blue - redOriginal;
	}
	else if (Green < Red && Green < Blue) // Green is smallest
		{
		   Red = Red - greenOriginal;
           Green = Green - greenOriginal;
           Blue = Blue - greenOriginal; 
		}
	else if (Blue < Red && Blue < Green) // Blue is smallest 
	{
		Red = Red - blueOriginal;
        Green = Green - blueOriginal;
        Blue = Blue - blueOriginal;
	}
	else if (Red == Green && Red == Blue) //Case where all three values are equal
	{
		Red = Red - blueOriginal; //value doesn't matter if all three are equal. 
        Green = Green - blueOriginal;
        Blue = Blue - blueOriginal; 
	}
	//Bottom three else if cases cover when two colors are equal to each other, but the third color is larger value. 
	//Not necessary for Zybooks 
	else if (Red == Blue && Red < Green)
	{
		Red = Red - redOriginal;
        Green = Green - redOriginal;
        Blue = Blue - redOriginal;
	}
	else if (Red == Green && Red < Blue)
	{
		Red = Red - redOriginal;
        Green = Green - redOriginal;
        Blue = Blue - redOriginal;
	}
	else if (Green == Blue && Green < Red)
	{
		   Red = Red - greenOriginal;
           Green = Green - greenOriginal;
           Blue = Blue - greenOriginal; 
	}
	cout << Red << " " << Green << " " << Blue << endl;

	return 0;
}
