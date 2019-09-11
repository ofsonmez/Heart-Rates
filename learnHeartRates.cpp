// Creating and manipulating HeartRates objects
#include <iostream>
#include "HeartRates.h"

using namespace std;

void displayHeartRates( HeartRates iniHeartRates){

	cout << "\n\nName and Surname: " << iniHeartRates.getName() 
		<< "\nBirth time(day, month, year): " 
		<< iniHeartRates.getDay() << ", " << iniHeartRates.getMonth()
		<< ", " << iniHeartRates.getYear()
	      	<< "\nAge: " << iniHeartRates.getAge() << " years"
		<< "\nMaximum Heart Rate: " << iniHeartRates.getMaxHeartRate() << " bpm"
		<< "\nTarget Heart Rate: " << iniHeartRates.getTargetHeartRate1()
		<< " - " << iniHeartRates.getTargetHeartRate2() << " bpm"
		<< endl;
}

int main(){

	HeartRates heartRates1{"john", "Doe", 11, 02, 1994};
	
	displayHeartRates( heartRates1);

	return 0;
}
