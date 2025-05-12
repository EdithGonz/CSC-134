// CSC-134
// M7T1
// Edith Gonzalez
// 05-09-25

#include <iostream>
using namespace std;

class Restaurant 
{
    public:
        void SetName(string restaurantName);
        void SetRating(int userRating);
        void Print();

    private:
        string name;
        int rating;
};

void Restaurant::SetName(string restaurantName)
{
    name = restaurantName;
    
}

void Restaurant::SetRating(int userRating)
{
    rating = userRating;
}

void Restaurant::Print()
{
    cout << name << "---- " << rating << " Stars" << endl;
}

int main()
{
    cout << "Top 3 Fast Food Ratings:" << endl;

    Restaurant faveRest;
    faveRest.SetName("Bojangle's");
    faveRest.SetRating(5);
    faveRest.Print();

    Restaurant backupRest;
    backupRest.SetName("Subway");
	backupRest.SetRating(4);
	backupRest.Print();

    Restaurant lastRest;
    lastRest.SetName("Wendy's");
    lastRest.SetRating(2);
    lastRest.Print();

}
