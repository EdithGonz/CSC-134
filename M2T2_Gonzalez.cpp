// CSC 134
// M2T2
// Edith Gonzalez
// 02-18-25

#include <iostream>
using namespace std;
int main ()
{
    //asking the user for input
    //declare variables
    string name;    // replaces the line-string name = "your name";
    int numApples;         
    double pricePerApple; 
    double total = numApples * pricePerApple;

    cout << "What is your name? " << endl;
    cin >> name;
    cout << "How many apples are for sale?" << endl;
    cin >> numApples;
    cout << "How much per apple?" << endl;
    cin >> pricePerApple;
    cout << "How much for all apples?" << endl;
    cin >> total;

    cout << "Welcome to " << name << "'s apple farm!" << endl;
    cout << "We have " << numApples << " apples in stock." << endl;
    cout << "Each apples price is $" << pricePerApple << endl;

    cout << "The total price for all " << numApples;
    cout << " is $" << total << endl;
    cout << "Thanks for stopping by!" << endl;

   return 0; 
}