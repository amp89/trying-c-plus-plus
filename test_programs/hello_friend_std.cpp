//my first c++ program, how neat!
#include <iostream>
using namespace std;

int main()
{

    //std::cout << "Hello friend.";//standard character output device
    cout << "\nHello friend.\n";//standard character output device

    std::cout << "printing some more stuff...";//looks like this works too

    //playing around with variables
    int a = 5;
    int b = 123;
    int c = a + b;
    cout << c;

    int z,x;


    int a2 = 5;
    int b2(23);
    int c2 {3};
    int d2{403};
    auto e = d2; //automatically figure it out
    decltype(d2) result; //get the type of

    result = a2+b2+c2+d2;
    cout << "\n";
    cout << result;
    cout << "\n";

    cout << "\n";




}
