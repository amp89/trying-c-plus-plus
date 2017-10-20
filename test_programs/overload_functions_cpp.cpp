#include <iostream>

using namespace std;


int doCrap(int a, int b)
{
    cout << "int doing crap" << endl;
    return a*b;
}

double doCrap(double a, double b)
{
    cout << "int doing crap" << endl;
    return a*b;
}

int main()
{
    int intRes = doCrap(324,23);
    cout << "integer result: " << intRes << endl;
    double doubleRes = doCrap(243.34245334,345.45);
    cout << "double result: " << doubleRes << endl;
    // double mixed = doCrap(234,345.34534); //error call to doCrap is ambigious
    // double mixed = doCrap(234.234234,234234); //same
    // cout << "mixed result: " << mixed << endl;
    return 0;
}
