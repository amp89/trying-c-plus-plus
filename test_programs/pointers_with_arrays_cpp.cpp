#include <iostream>

using namespace std;

int main()
{
    int someArray[5];
    int * arrayPointer;


    arrayPointer = someArray;
    *arrayPointer = 10;

    cout << "array pointer: " << arrayPointer << endl;
    cout << "some array: " << someArray << endl;
    //arrayPointer and someArray are basically the same, but arrayPointer can
    //change

    arrayPointer++;
    *arrayPointer = 20;

    arrayPointer = &someArray[2];
    *arrayPointer = 30;

    arrayPointer = someArray + 3;
    *arrayPointer = 40;

    arrayPointer = someArray;
    *(someArray+4) = 50;

    cout << "Printing Array..." << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << someArray[i] << endl;
    }




}
