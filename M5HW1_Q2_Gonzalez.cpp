//CSC 134
//Edith Gonzalez
//M5HW1-Bronze-Q2
//04-27-25

#include <iostream> 
using namespace std;

double calculate_volume(double width, double length, double height)

{

	return width * length * height;
}

int main()
{
	double width, length, height;

	cout << "Enter the width of the block: ";
	cin >> width;
	while (width <= 0)
	{
		cout << "Width must be greater than 0, Please enter again: ";
		cin >> width;
	}

	cout << "Enter the length of the block: ";
	cin >> length;
	while (length <= 0)
	{
		cout << "Length must be greater than 0. Please enter again: ";
		cin >> length;
	}

	
	cout << "Enter the height of the block: ";

	cin >> height;
	while (height <=0)
	{
		cout << "Height must be greater than 0";
		cin >> height;
	}

    double volume = calculate_volume(width, length, height);
    cout << "The volume of the block is " << volume << "." << endl;

    return 0;

}
