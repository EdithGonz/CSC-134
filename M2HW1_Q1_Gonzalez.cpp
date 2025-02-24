/*CSC 134
M2HW1--Gold--Question 1
Edith Gonzalez
02-23-25*/

#include <iostream>
using namespace std;
int main ()
{
    
    string name;
    int balance;
    double deposit;
    double withdrawal;

    cout << "What is your name?" << endl;
    cin >> name;
    cout << "What is your initial account balance?" << endl;
    cin >> balance;
    cout << "How much do you want to deposit?" << endl;
    cin >> deposit;
    cout << "How much would you like to withdrawal" << endl;
    cin >> withdrawal;

    double total_balance = balance + deposit - withdrawal;
    cout << "Account Name: " << name << endl;
    cout << "Account Number: 0217569" << endl;
    cout << "Total Account Balance: " << total_balance << endl;


   return 0; 
}