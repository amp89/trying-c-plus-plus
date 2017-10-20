#include <iostream>

using namespace std;

int addSomeStuff(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

void iReturnNothing(string a)
{
    cout << "Nope, not going to return anything " << a << endl;
}

void noParams(void)
{
    cout << "I don't do anything really" << endl;
}

void noParams2()
{
    cout << "Neither do i...." << endl;
}

void passByRefAndValue(int& aRef, int bVal){
    aRef++;
    bVal++;
    cout << "a (in function): " << aRef << endl;
    cout << "b (in function): " << bVal << endl;
}

void iAmFirstAPrototype(int qwerty,int);


int main()
{
    int result;
    result = addSomeStuff(1234,1235);
    cout << "The result is: " << result << endl;
    iReturnNothing("lskdjfldksjf");
    noParams();
    noParams2();

    cout << "Pass by ref and value ex.'s now: " << endl;

    int a = 100;
    int b = 200;

    cout << "Initial vals: a: " << a << " b: " << b << endl;
    passByRefAndValue(a,b);
    cout << "New vals: a: " << a << " b: " << b << endl;
    cout << "a is increased because the funciton was passed a reference of a " << endl;
    iAmFirstAPrototype(12345,54321);
    return 0; //will be automatically here for exit code if not included in source code
    //return EXIT_FAILURE; // THIS WORKED TOO... WEIRD!
}

void iAmFirstAPrototype(int xyz, int abc)
{
    cout << "xyz: " << xyz << " abc: " << abc << endl;
}
