/*CSC 134
M3LAB1
Edith Gonzalez
03-02-25*/


#include <iostream>
using namespace std;
int main() 
{
    //if statement example 2

  int choice; 
  //introduction
  cout << "Welcome to Pokemon Go!" << endl;
  cout << "To get started, choose one of three pokemon below." << endl;
  cout << "1.pikachu, 2.gengar, or 3.fearow?" << endl;
  cout << "Pick a number: ";
  cin >> choice;
  //using if
  if (1 == choice) 
  {
    cout << "You chose Pikachu!" << endl;     
  }
  else
  if (2 == choice)
  {
    cout << "You chose Gengar!" << endl;
  }
  else 
  if (3 == choice)
  {
    cout << "You chose Fearow!" << endl;
  }
  //finish up
  int next;
  cout << "Enter next to continue." << endl;
  cin >> next;
  cout << "Enjoy the game!" << endl;
  
  return 0; 

} 