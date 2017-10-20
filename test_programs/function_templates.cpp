#include <iostream>
using namespace std;


template <class WHATEVERIWANT>
WHATEVERIWANT someFunction(WHATEVERIWANT a, WHATEVERIWANT b)
{

    WHATEVERIWANT result;
    result = a+b;
    return result;
}

template <class FIRSTTHING, class SECONDTHING>
double someOtherFunction(FIRSTTHING a, SECONDTHING b)
{
    return a*b;
}

template <class T, int N>
T secondArgConstantInt(T something)
{
    return something * N;
}

int main()
{
    int intOne = 23456, intTwo = 64, intRes;
    double doubleOne = 1.11111, doubleTwo = 2.22222, doubleRes;

    intRes = someFunction<int>(intOne,intTwo);
    cout << "intRes " << intRes << endl;
    doubleRes = someFunction<double>(doubleOne, doubleTwo);
    cout << "doubleRes " << doubleRes << endl;

    cout << " - -- --- ----- ------ ----- ----- --- -- - " << endl;

    intRes = someFunction(intOne,intTwo);
    cout << "intRes " << intRes << endl;
    doubleRes = someFunction(doubleOne, doubleTwo);
    cout << "doubleRes " << doubleRes << endl;

    cout << " - -- --- ----- ------ ----- ----- --- -- - " << endl;

    intRes = someOtherFunction(intOne,doubleTwo);
    cout << "intRes " << intRes << endl;
    doubleRes = someOtherFunction(doubleOne, intTwo);
    cout << "doubleRes " << doubleRes << endl;


    cout << " - -- --- ----- ------ ----- ----- --- -- - " << endl;

    intRes = someOtherFunction<int,double>(intOne,doubleTwo);
    cout << "intRes " << intRes << endl;
    doubleRes = someOtherFunction<double,int>(doubleOne, intTwo);
    cout << "doubleRes " << doubleRes << endl;


    cout << " - -- --- ----- ------ ----- ----- --- -- - " << endl;

    intRes = secondArgConstantInt<int,10>(intOne);
    cout << "intRes " << intRes << endl;
    doubleRes = secondArgConstantInt<double,90>(doubleOne);
    cout << "doubleRes " << doubleRes << endl;


    return 0;

}
