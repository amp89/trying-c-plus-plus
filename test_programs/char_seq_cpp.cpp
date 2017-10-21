#include <string>
#include <iostream>

using namespace std;


int main()
{
    char charPrint[] = "Say a char: (10 lim) ";
    string stringPrint = "Say a string: ";

    char answerChar[5];
    string answerStr;

    cout << charPrint;
    cin >> answerChar;
    cout << endl;
    cout << stringPrint;
    cin >> answerStr;
    cout << endl;

    cout << "Char answer: " << answerChar << endl;
    cout << "Str answer: " << answerStr << endl;

    string charAsString = answerChar;
    cout << "char as str: " <<  charAsString << endl;
    cout << "str as char: " << answerStr.c_str() << endl;
    cout << "str as char: " << answerStr.data() << endl;

}
