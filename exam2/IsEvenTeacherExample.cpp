#include <iostream>

using namespace std;

bool Is_Even(int);

int main()
{
    int x;
    bool result;

    for (int i = 1; i <=10; i++)
    {
        cout << "Enter an integer: " << endl;
        cin >> x;
        result = Is_Even(x); //assigning function value to result which is a bool data type

        if (result == true)
            cout << x << " is even" << endl;
        else 
            cout << x << " is NOT even" << endl;
    }

    return 0;
}

bool Is_Even(int a)
{
    if (a % 2 == 0) ////don't actually need to declare bool variable unlike in my code. 
        return true; 
    else
        return false; 
}