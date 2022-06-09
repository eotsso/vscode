#include <iostream>
using namespace std;
/* 3.11 ZYBOOKS Remove grat from RBG
Summary: Given integer values for red, green, and blue, subtract the gray from each value.

Computers represent color by combining the sub-colors red, green, and blue (rgb). Each sub-color's value can range from 0 to 255. 
Thus (255, 0, 0) is bright red, (130, 0, 130) is a medium purple, (0, 0, 0) is black, (255, 255, 255) is white, and (40, 40, 40) is a dark gray. 
(130, 50, 130) is a faded purple, due to the (50, 50, 50) gray part. 
(In other words, equal amounts of red, green, blue yield gray).

Given values for red, green, and blue, remove the gray part.
*/
int main() {

   int Red, Green, Blue;
   int redOriginal, greenOriginal, blueOriginal;
 
	cin << Red; 
    cin << Green;  
	cin << Blue;   
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
	else 
		cout << "Error 1" << endl;
		return 1; 
	
	cout << Red << " " << Green << " " << Blue << endl;

	return 0;
}
