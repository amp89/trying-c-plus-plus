#include <iostream>

using namespace std;


void doArrayStuff(int arg[], int len)
{
    for(int i = 0; i < len; i++)
    {

        arg[i]++;

    }
}

void printArray(int arg[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << arg[i];
        if(i < len-1){
            cout << ", ";
        }else{
            cout << endl;
        }
    }
}

void doMultiDimensionArrayStuff(int arg[][3][3], int initLen) //YOu kinda have to put the depth
{
    int i,j,k;
    for(i=0;i<initLen;i++)
    {
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                arg[i][j][k]++;
            }
        }
    }

}

void printMultiDimensionArray(int arg[][3][3], int initLen) //YOu kinda have to put the depth
{
    int i,j,k;
    for(i=0;i<initLen;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                cout << arg[i][j][k];
                if( k<2 || j<2){
                    cout << ", ";
                }else{
                    cout << endl;
                }
            }
        }
    }

}



int main()
{


    int someArr [8]  {0,1,2,3,4,5,6,7};

    // cout << someArr << endl; just prints mem location
    printArray(someArr, 8);
    doArrayStuff(someArr, 8);
    printArray(someArr, 8);
    // cout <<someArr << endl; << just prints mem location

    cout << endl << "------------------------" << endl;

    int multiArr[][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},{{1,2,3},{4,5,6},{7,8,9}},{{1,2,3},{4,5,6},{7,8,9}}};
    printMultiDimensionArray(multiArr,3);


    doMultiDimensionArrayStuff(multiArr,3);
    printMultiDimensionArray(multiArr,3);

}
