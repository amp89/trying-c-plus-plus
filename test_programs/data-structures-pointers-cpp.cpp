#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct car{
    string color;
    int year;
};


int main()
{

    string inputString;

    car someCar;
    car * carPointer;
    carPointer = &someCar;

    cout << "Color: ";
    getline(cin, carPointer -> color);
    cout << "Year: ";
    getline(cin, inputString);
    (stringstream) inputString >> carPointer -> year;

    cout << "Color: " << someCar.color << ", Year: " << someCar.year << endl;


    return 0;
}
