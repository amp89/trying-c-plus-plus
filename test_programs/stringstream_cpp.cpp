#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main()
{
    string someStr;
    int someNum;
    float someFloat;

    cout << "Put a number (int): ";
    getline(cin,someStr);

    stringstream(someStr) >> someNum;

    cout << "Put some other number (float): ";

    getline(cin,someStr);
    stringstream(someStr) >> someFloat;

    cout << "someNum: " << someNum << " and someFloat: " << someFloat << endl;




}
