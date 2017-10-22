#include <iostream>


using namespace std;


void printTwoInts(int a, int b)
{
    cout << "firstint: " << a << " secondint: " << b << endl;
}


void doPrintTwoInts(void (* function)(int,int), int a, int b)
{
    (* function)(a,b);
}

int main()
{
    void (* functionPointer)(int,int) = printTwoInts;

    doPrintTwoInts(functionPointer,2,3);

    return 0;

}
