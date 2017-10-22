#include <iostream>


using namespace std;


int main()
{

    int myFavNum = 4;
    const int * myFavConstPointer = &myFavNum;
    int * myFavPointer = &myFavNum;
    const int leastFav = 7;
    const int * const myLeastFavorite = &leastFav;

    int randomNum = 2;
    const int * const randomNumPointer = &randomNum;

    cout << "myFavPointer mem: " << myFavPointer << endl;
    cout << "myFavPointer val: " << *myFavPointer << endl;

    cout << "myFavConstPointer mem: " << myFavConstPointer << endl;
    cout << "myFavConstPointer val: " << *myFavConstPointer << endl;

    cout << "incrementing vals. . . " << endl;

    (*myFavPointer)++;
    //(*myFavConstPointer)++; //test_programs/const_pointer.cpp:23:25: error: read-only variable is not assignable

    cout << "myFavPointer mem: " << myFavPointer << endl;
    cout << "myFavPointer val: " << *myFavPointer << endl;

    cout << "myFavConstPointer mem: " << myFavConstPointer << endl;
    cout << "myFavConstPointer val: " << *myFavConstPointer << endl;


    cout << "-------------------------------------------------" << endl;

    cout << "leastFav pos: " << myLeastFavorite << endl;
    cout << "leastFav val: " << *myLeastFavorite << endl;

    cout << "randomNumPointer mem: " << randomNumPointer << endl;
    cout << "randomNumPointer val " << *randomNumPointer << endl;

    cout << "incrementing randomNum (not by pointer)" << endl;
    randomNum++;

    cout << "randomNumPointer mem: " << randomNumPointer << endl;
    cout << "randomNumPointer val " << *randomNumPointer << endl;

    cout << "incrementing randomNum (by pointer)" << endl;

    // (*randomNumPointer)++;
    cout << "actually no that won't work... weird/neat!" << endl;

    cout << "randomNumPointer mem: " << randomNumPointer << endl;
    cout << "randomNumPointer val " << *randomNumPointer << endl;





}
