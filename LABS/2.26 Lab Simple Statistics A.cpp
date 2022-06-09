#include <iostream>
#include <iomanip> //required to use fixed << setprecision() function
#include <conio.h>
using namespace std;


main() {
	
	//Part 1 Given 4 integers, output their product and their average, using integer arithmetic.
	
	int a, b, c, d, product, average;
	
	//cout << "Enter four integer values: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	product = (a * b * c * d);
	average = (a + b + c + d) / 4; 
	
	cout << product << " " << average << endl;

	
	//Part 2 Also output the product and average, using floating-point arithmetic.

	double floatProduct;
	double floatAverage; 
		
	//Output each floating-point value with three digits after the decimal point, which can be achieved by executing
	//cout << fixed << setprecision(3); once before all other cout statements.
	
	floatProduct = (double)(a * b * c * d);
	floatAverage = (double)(a + b + c + d) / 4; //can also write 4.0 to implictedly convert instead of (float) typecasting

	cout << fixed << setprecision(3) << floatProduct << " " << floatAverage << endl;
	cout << "hi" << endl;
	
	return 0;
	
}

