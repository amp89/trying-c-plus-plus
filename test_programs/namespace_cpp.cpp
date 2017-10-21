#include <iostream>



namespace something
{
    int somethingInt = 12345;
}


using namespace std;
using namespace something;

int blankGlobal; //this will be zero

int main()
{

    int blankLocal; //this will be something random

    std::cout << something::somethingInt << std::endl;
    cout << something::somethingInt << endl; //since using namespace std, this works
    cout << somethingInt << endl; //this also works, lol

    cout << "/////////////////////////////" << endl;

    cout << "Blank global: " << blankGlobal << endl;

    cout << "Blank local: " << blankLocal << endl;


}
