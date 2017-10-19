#include <iostream>
#include <string>

using namespace std;

int main()
{

    int a;
    int b;

    cin >> a >> b;
    cout << "a:" << a << "b:" << b << endl;

    string iAmOnlyOneWordAtMost;

    cin >> iAmOnlyOneWordAtMost;

    cout << "cin string: " << iAmOnlyOneWordAtMost;

    string iAmWhateverStr;

    getline(cin, iAmWhateverStr);

    cout << "whatever string: " << iAmWhateverStr; //doing it this way will
                                                // have the first workd in
                                                //iAmOnlyOneWordAtMost and
                                                //the rest in iAmWhateverStr




    return 0;

}
