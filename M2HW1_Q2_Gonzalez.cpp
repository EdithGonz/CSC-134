// CSC 134
// M2HW1--Gold--Q2
// Edith Gonzalez
// 02-24-25

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{

    //constants for cost and amount
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    //variables
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

    //desired output formatting for numbers
    cout << setprecision(2) << fixed << showpoint;

    //prompt user for lenght, width, and height
    cout << "Enter the dimensions, in feet:\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    
    //calculate volume and cost of produce
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    //display calculated data
    cout << "The volume is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost: $" << cost << endl;
    cout << "Charge: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

   return 0; 
}