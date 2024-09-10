#include <iostream>
using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "bcd";
    if (s1 == s2)
        cout << "Same" << endl;
    else if (s1 < s2)
        cout << "Smaller" << endl;
    else
        cout << "Greaetr" << endl;
    return 0;
}