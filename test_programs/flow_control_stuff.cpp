#include <iostream>

using namespace std;


int main()
{
    for(int i = 0; i < 100; i++)
    {
        cout << i;
        if(i==15){
            cout << "OMG I is 15" << endl;
        }
    }

    cout << "\n well that was neat" << endl;

    int myFavoriteNumber = 4;

    switch(myFavoriteNumber)
    {
        case 3:
            cout << "this won't happen" << endl;
            break;
        case 4:
            cout << "this will happen" << endl;
            break;
        default:
            cout << "this won't happen either cause i harded coded it." << endl;

    }

    cout << "that was also neat" << endl;

    int stuffNumber = 1;
    someLabel:
    cout << stuffNumber++ << endl;

    if (stuffNumber<=3){

        goto someLabel;

    }
    cout << "its done." << endl;
    if (stuffNumber==4)
        cout << "idk why i'm putting this here" << endl;

    int ugh = 0;
    while(ugh < 100){
        cout<<++ugh;
    }
    int aaa;
    int bbb;
    for(aaa = 100, bbb = 0; aaa > bbb; --aaa, ++bbb){
        cout << "aaa: " << aaa << " bbb: " << bbb << "| ";
    }

    cout << "\n/////////////////////" << endl;

    for(int z = 0; z < 100; z++){
        cout << z;
    }
    cout << endl;
    for(char someChar : "HeLlLllLlOoOooo"){
        cout << someChar << endl;
    }


}
