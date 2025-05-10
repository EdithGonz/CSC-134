// CSC-134
// M7T1
// Edith Gonzalez
// 05-09-25

#include <iostream>
using namespace std;

void printResult(int number, int result) {
    cout << number << " sqaured = " << result << endl;
}

int square(int number) {
    int result;
    result = number * number;
    return result;
}


int main ()
{
    int count = 1;
    int result;

    while (count <= 10){
       
        result = square(count);
       
        printResult(count, result);
        count++;
    }
}