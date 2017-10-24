#include <iostream>

using namespace std;

int main()
{
    char inputArray[5];

    cin >> inputArray;

    cout << sizeof(inputArray) << endl;
    cout << inputArray << endl;

    // for(char c : inputArray)
    // {
    //     cout << c << endl;
    // }
    cout << "<<" << endl;

    cout << "make a char pointer called pointy, assign to inputArray...";
    char * pointy = 0;
    pointy = inputArray;
    cout << "POINTY: " << pointy << endl;
    cout << "ADDRESS OF POINTY: " << &pointy << endl;
    cout << "Value at pointy: " << *pointy << endl;


    // int * charPoint;


    for(int i = 0; i < 5; i++)
    {

        cout << "POINTY: " << pointy << endl;
        cout << "ADDRESS OF POINTY: " << &pointy << endl;
        cout << "Value at pointy: " << *pointy << endl;
        pointy++;

        cout << "-----" << endl;
        cout << inputArray[i] << endl;
        cout << &inputArray[i] << endl;

        char * charPoint = &(inputArray[i]);

        cout << charPoint << endl;
        cout << *charPoint << endl;

        cout << "/////" << endl;
    }


}
