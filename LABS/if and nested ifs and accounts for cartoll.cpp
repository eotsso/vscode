#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
	int timeHour;
	int timeMinute;
	int typeofDay; 
	int numPeople;
	char inputColon;
	double tollAmount;
	
	cout << "Enter time of travel (HH:MM in a 24 hour format): ";	
	cin >> timeHour >> inputColon >> timeMinute;
	
	cout << "Enter type of day (0 - weekday, 1 for weekend/holiday): ";
	cin >> typeofDay;
	
	cout << "Enter number of people in vehicle: ";
	cin >> numPeople;
	
	if (typeofDay == 0) {
		if (timeHour < 6) {
			tollAmount = 1.55;
		}
		else if (timeHour < 10) {
			tollAmount = 4.65;
		}
		else if (timeHour < 18) {
			tollAmount = 2.35;
		}
		else {
			tollAmount = 1.55;
		}
	} 
	else { //why no else if ( typeofDay = 1) ... just redundant I guess? 
		if (timeHour < 6) {
			tollAmount = 1.55;
		}
		else if (timeHour < 10) {
			tollAmount = 4.65;
		}
		else if (timeHour < 18) {
			tollAmount = 2.35;
		}
		else {
			tollAmount = 1.55;
		}
	if (numPeople >= 3) {
		if ((typeofDay == 0) && (timeHour >= 6) && (timeHour < 10)){
			tollAmount = tollAmount * 0.5;
		}
		else {
			tollAmount = 0.0;
		}
		//Adusting AM or PM 
		cout << "Toll at "; 
		
		if (timeHour == 0) { 
		cout << "12:"; // adjusts for midnight time e.g., if user enters 0:12, then it's midnight 12:12 (AM)
		}
		else if (timeHour <= 12) {
			cout << timeHour << ":";
		}
		else {
			cout << timeHour - 12 << ":";  // adjusts for PM time (e.g., if user enters 16:44, adusts to 04:44 (PM)
		}
	}
	
	//Output minute with formatting 
	cout << setw(2) << setfill('0') << timeMinute; 
	
	//Output am/pm
	if (timeHour < 12){
		cout << " am";
	}
	else {
		cout << " pm";
	}
	
	cout << " is " << tollAmount << endl;
	
	return 0;
	}
}



