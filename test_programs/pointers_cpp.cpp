#include <iostream>

using namespace std;


int main()
{
    int someInt = 1234;
    int * somePointer;

    somePointer = &someInt;

    cout << "variable: " << someInt << endl;
    cout << "pointer: " << somePointer << " pointer val " << * somePointer << endl;

    int * anotherPointer = &someInt;

    cout << "anotherPointer: " << anotherPointer << endl;

    int * pointerCopy = anotherPointer;

    cout << "copy of Pointer.  POINTER: " << pointerCopy << " value: " << * pointerCopy << endl;



}
