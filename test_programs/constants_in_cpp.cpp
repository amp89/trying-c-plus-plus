#include <iostream>

using namespace std;

const double somestuff = 654.4647956434;
#define somethingElse "asdfasdf"
#define SOMETHING "SOMETHINGsldjflsdkjf"


int main(){

    cout << somestuff << endl;
    cout << somethingElse <<endl;
    cout << SOMETHING <<endl;

    int y;
    int x;
    //This is interesting....
    cout << y << endl; //didn't define y, yet this prints 1
    cout << x << endl; //didn't define x, yet this prints 116060745


    y = 2+ (x=5); //works

    cout << y << endl;
    cout << x << endl;

    int z = (int) 9.87654;

    cout << z << endl;
    cout << sizeof (z) << endl;



}
