BUG #1  pow function

   r = pow(2, (1/12)); 
/* 
	C language, (1/12) are treated as integers. So the division of two integers results in an integer. 
  	1/12 = 0, which is pow (2, 0) = 1, not the expected value. 
  	SOLUTION: covert 1/12 to float-point by either changing 
  		a. pow(1.0/12) or pow(1.0/12.0)
  		b. typecasting
  		c. just mutliplying by 1.0 to convert into a double
  	WHAT I LEARNED: 
  		- pow is a float operator 
  		- (int / int) will return an int value; best to look out. 
*/ 	


BUG #2 rounding  

cout << "Cans needed: " << (int) (wallArea / GAL_PAINT_PER_SQFT) << " can(s)" << endl;
	//integers that aren't whole numbers are rounded DOWN. 
	
Solution #1 (with problems)
   cout << "Cans needed: " << (int) round(wallArea / GAL_PAINT_PER_SQFT) << " can(s)" << endl;
		PROBLEM: Input: 12 and 13 (finding area, where GAL_PAINT_PER_SQFT = 350), 
				my OUTPUT: 0, 
				expected OUTPUT is 1 ... ?
					value: 0.445, so ROUND mthfunction also rounds down and up...?  
					
Solution #2 (FIXED)
	   cout << "Cans needed: " << (int) ceil(wallArea / GAL_PAINT_PER_SQFT) << " can(s)" << endl;
			//logically, you will always need at least 1 can of paint, so you'd always want to round up to whole cans. 

	WHAT I LEARNED: 
		- #include <cmath> functions
			- round() ; // rounds up or down, depending
			- ceil () ; // always rounds up
			- floor (); // always rounds down 
		- In MOST cases for C++, you don't need a round function; simple trick is to add 0.5, then cast to an integer. 
			double d = 3.1415;
			double d2 = 4.7;
			int i1 = (int)(d + 0.5);
			int i2 = (int)(d2 + 0.5);
			i1 is 3, and i2 is 5. You can verify it yourself. 
			// NOTE* this only works for problems where 0 is allowed. e.g. (int) 0.1 + 0.5 = 0.6 = 0. 
			// In the above solution, a value of 1 always needed since the problem specified 1 can minimum for any sort of painting. 
			
	
	
BUG #3

e.g.,
    Kindness [n]
[s][s][s] is tricky. [n]


cin >> str1;
cin >> str2;

str1 = Kindness
str2 = is


cin >> str1;
getline(cin, str2);

str1 = Kindness
str2 = [n] //grabs the remainder of the line because there is an invisible [n] when you press enter.

		SOLUTION: -----------------------------------

cin >> str1;
// Skip newline
getline(cin, tmpStr);
getline(cin, str2);

str1 = Kindness
tmpStr = [n]
str2 = [s][s][s] is tricky. [n]
		
			
PROBLEM SET 1: (use of % and integer divison)
- Use % to get the desired rightmost digits. Ex: The rightmost 2 digits of 572 is gotten by 572 % 100, which is 72.			 
- Hint: Use / to shift right by the desired amount. Ex: Shifting 572 right by 2 digits is done by 572 / 100, which yields 5. 
(Recall integer division discards the fraction).			
	(Refer to PhoneNumberBreakDown for an example. )	

	---

	void MakeSentenceExcited(string& sentenceText) {

   unsigned int i; //Loop index
   /* Your solution goes here  */
   for (i = 0; i < sentenceText.size(); i++) 
      {
         if (sentenceText.at(i) == '.')
            sentenceText.at(i) = '!'; BUG ERROR, I WROTE == INSTEAD OF =. 
      }
	  
