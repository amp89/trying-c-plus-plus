//testing strings

#include <iostream>
#include <string>

using namespace std;


int main()
{
    // do endl instead: string stringHey = "\nHello!\n";
    string stringHey = "Hello!";
    //do endl instead: string stringHey = "\nHello!\n";
    string stringBye = "Bye!";
    cout << stringHey << endl;
    cout << stringBye << endl;
    cout << stringHey << stringBye <<endl;
    return 0;// I was messing with this... i guess main has to return int,
                    //even if you change the type (ex: string main())

}
