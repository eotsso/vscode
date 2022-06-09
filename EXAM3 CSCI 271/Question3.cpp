/*

3. Write a function Average that accepts a 
floating-point array and its size and returns the average of the array elements. 
*/

#include <iostream>
using namespace std;

float Average(float[], int); //f-n prototype

int main()
{
    const int s = 10;
    float a[s] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    float result;

    result = Average(a, s);
    
    cout << result;
}


/* ONLY BOTTOM PART IS EXAM */

float Average (float a[], int size)
{
    int i;
    float average, sum; 

    sum = 0;

    for (i = 0; i < size; i++)
        sum += a[i];

    average = sum / i; //since sum is a float--float division will occur.  
                       //I could also use (sum / size), but (sum / i) works just as well. 
    return average; 
}