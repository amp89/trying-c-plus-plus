#include <iostream>

using namespace std;

int main()
{
    int x = 100;
    int y = 600;
    {
        int x; //no longer referes to x outside of scope block
        x = 50;
        y = 300;
        cout << "inner x = " << x << endl;
        cout << "inner y = " << y << endl;

    }
    cout << "outter x = " << x << endl; // has not been changed
    cout << "outter y = " << y << endl;

}
