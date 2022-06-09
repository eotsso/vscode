#include <iostream>
using namespace std;

int main()
{
	int highwayNumber; //1-999
	
	//cin >> highwayNumber;
	highwayNumber = 0;

	if ((highwayNumber > 99 || highwayNumber <= 0) && highwayNumber % 100 == 0) //non-zero values and values greater than 99
		cout << highwayNumber << " is not a valid interstate highway number." << endl;
			
	else if (highwayNumber < 100 && highwayNumber % 2 == 0) // even 
		cout << "I-" << highwayNumber << " is primary, going east/west." << endl;
	
	else if (highwayNumber < 100 && highwayNumber % 2 == 1) // odd 
		cout << "I-" << highwayNumber << " is primary, going north/south." << endl;
	
	else if (highwayNumber > 100 && highwayNumber % 2 ==0)
		{
		cout << "I-" << highwayNumber << " is auxiliary, serving I-"; //auxillary for even value
		highwayNumber = highwayNumber % 100;
		cout << highwayNumber << ", going east/west." << endl; 
		}

	else if (highwayNumber > 100 && highwayNumber % 2 == 1) //auxillary for odd value 
		{
		
		cout << "I-" << highwayNumber << " is auxiliary, serving I-";
		highwayNumber = highwayNumber % 100; 
		cout << highwayNumber << ", going north/south." << endl;
		}
	
	return 0;
}

//how do I indicate even and odd values?
//Range values
//Nested ifs	
