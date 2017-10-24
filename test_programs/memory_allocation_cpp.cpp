#include <iostream>
#include <new>

using namespace std;

int main()
{
    int i;
    int * intPointer;

    cout << "How many..?: ";
    cin >> i;

    // i = 1000000000000;

    intPointer = new (nothrow) int[i];
    // intPointer = nullptr;


    if(intPointer == nullptr){ //this doesn't seem to be working properly, auto truncating i ?
        cout << "You suck";
        return 1;
    } else {
        for(int idx = 0; idx < i; idx++){
            cout << "put a number into memory";
            cin >> intPointer[idx];
            cout << endl;
        }

        cout << "Here's your numbers, stupid" << endl;

        for(int idx = 0; idx < i; idx++){
            cout << intPointer[idx] << " " << endl;
            cout << "mem "<< &intPointer[idx] << " " << endl;
            
        }

        delete[] intPointer;


    }

    return 0;



}
