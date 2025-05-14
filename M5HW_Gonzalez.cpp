//CSC 134
//Edith Gonzalez
//M5HW1-Bronze-Q1
//04-27-25

#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

double average_rainfall(double r1, double r2, double r3)
{
	return (r1 + r2 + r3) / 3.0;
}


int main()
{

	string month1, month2, month3;
	double rain1, rain2, rain3;

	cout << "Enter month: ";
	cin >> month1;
	cout << "Enter rainfall for " << month1 << ": ";
	cin >> rain1;

	cout << "Enter month: ";
	cin >> month2;
	cout << "Enter rainfall for " << month2 << ": ";
	cin >> rain2;

	cout << "Enter month: ";
	cin >> month3;
	cout << "Enter rainfall for " << month3 << ": ";
	cin >> rain3;

	double avg = average_rainfall(rain1, rain2, rain3);
	cout << fixed << setprecision(2);
	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << avg << " inches." << endl;

	return 0;
}	


