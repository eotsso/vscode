#include <iostream>
#include <cstdlib> //required for rand() function.
#include <ctime> //required for time(NULL); function. 

using namespace std;

void moveTortoise(int *);
void moveHare (int *);
void createArray(int *, int *);

int main ()
{

srand(time(NULL)); //grabs the computer time which is a "random" seed. 

int num;
int tortPos = 1; 
int harePos = 1; 

cout << "BANG!!!!!\nAND THEY ARE OFF!!!!!" << endl;

while (tortPos < 69 && harePos < 69) 
{
    moveTortoise(&tortPos); 
    moveHare(&harePos);

    if (tortPos < 0) 
        tortPos = 1; 
        
    if (harePos < 0)
        harePos = 1; 
    
    createArray(&tortPos, &harePos); 
}

return 0;

}

void moveTortoise(int *tortPtr)
{
    int num; 
    num = rand() % 10 + 1; 

    if (num > 0 && num < 6)         //1 - 5, 50%; Fast plod
        *tortPtr = *tortPtr + 3; 
    else if (num < 8)               //6 - 7, 20%; Slip
        *tortPtr = *tortPtr - 6; 
    else
        *tortPtr = *tortPtr + 1;    //8 - 10, 30%; Slow plod

}

void moveHare(int *harePtr)
{
    int num; 
    num = rand() % 10 + 1; 

    if (num > 0 && num < 3)         //1-2, 20%, Sleep     
        *harePtr = *harePtr;
    else if (num < 5)               //3-4, 20%, Big hop         
        *harePtr = *harePtr + 9; 
    else if (num < 6)               //5, 10%, Big slip
        *harePtr = *harePtr - 12;
    else if (num < 9)               //6 - 8, 30%, Small hop   
        *harePtr = *harePtr + 1; 
    else                            //9-10, 20%, Small slip 
        *harePtr = *harePtr - 2;
}

void createArray(int *tortPtr, int *harePtr) //re-creates the 70 line 
{
    const int size = 70;
    char progress[size]; //0 - 69

    for (int i = 0; i < size; i++)
        progress[i] = '-';

    if (*tortPtr > 69)
        *tortPtr = 69;
    if (*harePtr > 69)
        *harePtr = 69;

    if (*harePtr == *tortPtr && *harePtr != 69) 
    {
        progress[*tortPtr] = 'O';
        progress[*tortPtr + 1] = 'U';
        progress[*tortPtr + 2] = 'C';
        progress[*tortPtr + 3] = 'H';
        
    }
    else if (*harePtr == 69 && *tortPtr == 69) // if hare and tort tie, print blank. 
        progress[69] = '-';
    else
    {
        progress[*harePtr] = 'H';
        progress[*tortPtr] = 'T';
    }
    

    for (int i = 0; i < size; i++)
    {
        cout << progress[i];
    }
    
    cout << endl;
}


