#include <iostream>


using namespace std;

void incrementStuff(void* input, int object_size)
{
    cout << "object_size: " << object_size << endl;

    if(object_size == sizeof(char)){
        char * charPointer = (char*)input;
        ++(*charPointer);

    }else if (object_size == sizeof(int)){
        int * intPointer = (int*)input;
        ++(*intPointer);
    }


}


int main()
{
    char charVar = 'h';
    char * charPointer = &charVar;

    int intVar = 1;
    int * intPointer = &intVar;

    cout << "vals: charVar: " << charVar << " intVar: " << intVar << endl;

    incrementStuff(charPointer,sizeof(charVar));
    incrementStuff(intPointer,sizeof(intVar));

    cout << "vals: charVar: " << charVar << " intVar: " << intVar << endl;





}
