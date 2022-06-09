#include <iostream>
#include <iomanip> 

using namespace std;

float Fahrenheit(int);
float Celsius(int);

int main()
{
    float c_temp, f_temp;

    for (int i = 0; i <= 100; i++)
    {
        cout << "Celsius" << setw(15) << "Fahrenheit" << endl;
        
        f_temp = Fahrenheit(i);
        
        cout << setw(7) << i << setw(15) << f_temp << endl;
    }

    cout << endl;

    for (int i = 32; i <= 212; i++)
    {
        cout << "Fahrenheit" << setw(15) << "Celsius" << endl;
        
        c_temp = Celsius(i);
        
        cout << setw(10) << i << setw(15) << fixed << setprecision(3) << c_temp << endl;
    }
}


     float Celsius (int tempF)
     {
        return (5.0/9.0) * (tempF - 32); 
     }

    float Fahrenheit(int tempC)
    {
        return (9.0/5.0) * (tempC) + 32;
    }