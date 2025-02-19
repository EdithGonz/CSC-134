// CSC 134
// M2T1
// Edith Gonzalez
// 02-18-25

#include <iostream>
using namespace std;
int main ()
{
    //variables are like mailboxes
    string name = "Edith";
    int num_apples = 10;          // int are whole numbers, 3, not 3.5
    double price_each = 0.25;  // double stands for floating point, numb-like 3.5 or 11.0002

    cout << "Welcome to the " << name << " apple farm!" << endl;
    cout << "We have " << num_apples << " in stock." << endl;
    cout << "Each apple costs $" << price_each << endl;

    //some math now
    double total_price = num_apples * price_each;
    //run program every line to save time at the end
    cout << "The total price for all " << num_apples;
    cout << " is $" << total_price << endl;
    cout << "Thanks for coming by!" << endl;


   return 0; 
}