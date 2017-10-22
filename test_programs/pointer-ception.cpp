#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int * x = &a;
    int ** y = &x;
    int *** z = &y;

    cout << "a val: " << a << endl;
    cout << "-----" << endl;
    cout << "x val: " << *x << endl;
    cout << "x pos: " << x << endl;
    cout << "-----" << endl;
    cout << "y val: " << *y << endl;
    cout << "y pos: " << y << endl;
    cout << "-----" << endl;
    cout << "z val: " << *z << endl;
    cout << "z pos: " << z << endl;


}
