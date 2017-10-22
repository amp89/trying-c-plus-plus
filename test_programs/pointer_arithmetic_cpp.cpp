#include <iostream>


using namespace std;

int main()
{
    int first = 1;
    int second = 2;

    int * p = &first;

    cout << "\nPOINTER VAL: " << *p << endl;
    cout << "POINTER POS: " << p << endl;



    cout << "\nPOINTER VAL: " << *p << endl;
    cout << "POINTER POS: " << p << endl;

    for(int  i = 0; i<10000; i++)
    {
        cout << *++p << endl;
    }


}
