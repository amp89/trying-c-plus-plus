#include <iostream>
#include <string>
#include <sstream>

using namespace std;


struct car {
    string color;
    int year;
} cars [3];

int main()
{
    string inputString;

    for(int i = 0; i<3; i++)
    {
        cout << "color: ";
        cin >> cars[i].color;
        cout << "year: ";
        cin >> cars[i].year;
    }


    cout << "you write this crap:" << endl;
    for (int n=0; n<3; n++)
    {
        cout <<  "year: " << cars[n].year << ", color: " << cars[n].color << endl;
    }

    return 0;

}
