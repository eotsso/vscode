#include <iostream>
#include <iomanip> //let's us use fixed << setprecision(x); 
using namespace std;

int main() {
	
	//Given 4 integers, output their product and their average, using integer arithmetic.

	int a, b, c, d;
	int product, average;
	
	//cout << "Enter four different integers: " << endl;
	cin >> a; 
	cin >> b;
	cin >> c; 
	cin >> d;
	
	product = a * b * c * d;
	average = (a + b + c + d)/4;
	
	cout << product << " " << average;
	//1600 6


	//Part 2 Also output the product and average, using floating-point arithmetic.
	
	double doubleProduct;
	double doubleAverage;
	
	doubleProduct = (double)a * b * c * d;
	doubleAverage = (double)(a + b + c + d) / 4;
	
	cout << fixed << setprecision(3) << doubleProduct << " " << doubleAverage; 
	
	return 0;
	
}

/*
2.26 LAB: Simple statistics
Part 1
Given 4 integers, output their product and their average, using integer arithmetic.

Ex: If the input is:

8 10 5 4
the output is:

1600 6
Note: Integer division discards the fraction. Hence the average of 8 10 5 4 is output as 6, not 6.75.

Note: The test cases include four very large input values whose product results in overflow. You do not need to do anything special, but just observe that the output does not represent the correct product (in fact, four positive numbers yield a negative output; wow).

Submit the above for grading. Your program will fail the last test cases (which is expected), until you complete part 2 below.

Part 2
Also output the product and average, using floating-point arithmetic.

Output each floating-point value with three digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(3); once before all other cout statements.

Ex: If the input is:

8 10 5 4
the output is:

1600 6
1600.000 6.750
Note that fractions aren't discarded, and that overflow does not occur for the test case with large values.
*/
