//CSC 134
//M5LAB2
//Edith Gonzalez
//04-13-25


#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area); 




int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}


double getLength()
{
    double len;
    cout << "Enter Length of Rectangle: ";
    cin >> len;
    return len;

}

double getWidth()
{
    double wid;
    cout << "Enter Width of Rectangle: ";
    cin >> wid;
    return wid;

}

double getArea(double length, double width)

{
    return length * width;
}

void displayData(double length, double width, double area)
{
    cout << "length: " << length << endl;
    cout << "width: " << width << endl;
    cout << "A8rea: " << area << endl;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************