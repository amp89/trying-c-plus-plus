#include <iostream>


using namespace std;


int main()
{

    int someArrayOfTen [10];
    int * validIntPointer = &someArrayOfTen[5];
    int * intPointer = someArrayOfTen + 30;

    cout << "some array loc: " << someArrayOfTen << endl;

    cout << "validIntPointer loc: " << validIntPointer << endl;
    cout << "validIntPointer val: " << *validIntPointer << endl; //this is some random shit

    cout << "intPointer loc: " << intPointer << endl;
    cout << "intPointer val: " << *intPointer << endl; //this prints some random shit b/c someArrayOfTen + 30 isn't valid

    int * actualNullPointer = 0;
    int * anotherActuallNullPointer = nullptr; //NULL works too i guess.

    cout << "actualNullPointer (0) loc: " << actualNullPointer << endl;  //0x0
    // cout << "actualNullPointer (0) val: " << *actualNullPointer << endl; //segmentation fault


    cout << "anotherActuallNullPointer (0) loc: " << anotherActuallNullPointer << endl; // 0x0
    // cout << "anotherActuallNullPointer (0) val: " << *anotherActuallNullPointer << endl; //segmentation fault



}
