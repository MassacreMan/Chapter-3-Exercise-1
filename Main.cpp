// This program calculates a car's gas mileage. 
#include <iostream> 
using namespace std;

int main()

{
	
	//Variables to hold the number of miles driven, gallons used, and total mileage
	double milesDriven, gallonsUsed, mileage;

	cout << "This program calculates a car's gas mileage." << endl;
	cout << "Enter the number of miles driven." << endl;
	cin >> milesDriven;
	cout << "Enter the number of gallons of gas used." << endl;
	cin >> gallonsUsed;
	mileage = milesDriven / gallonsUsed;
	cout << "The car's gas mileage is: " << mileage << " miles per gallon." << endl;
	return 0;

}