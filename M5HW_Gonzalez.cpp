//CSC 134
//Edith Gonzalez
//M5HW1-Bronze-Q1
//04-27-25

#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

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

	double average = (rain1 + rain2 + rain3) / 3.0;
	cout << fixed << setprecision(2);
	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches." << endl;

	return 0;
}	


