#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
int guess;
char restart = 'y';
srand(time(NULL)); 

while (restart == 'y')
{
    int a = rand() % 1000 + 1;

    cout << "I have a number between 1 and 1000." << endl;
    cout << "Can you guess the number?" << endl;
    cout << "Please type your first guess: ";

    cin >> guess;

    while (guess != a)
    {
        if (guess > a)
        {
            cout << "\nToo high. Try again: ";
            cin >> guess;
        }
        else if (guess < a)
        {
            cout << "\nToo low. Try again: ";
            cin >> guess;
        }
    

        if (guess == a) 
        {
            cout << "Excellent! You guessed the number!" << endl;
            cout << "Would you like to play again (y or n)?" << endl;
        
            cin >> restart;
        }

    }
}
  return 0;
  
}
