#include <iostream>
using namespace std;

int main()
{
    string str = "gfg";
    cout << str.length() << endl;
    str = str + "xyz";
    cout << str << endl;
    cout << str.substr (1, 3) << endl;
    cout << str.find("fg") << endl;
    string x = str.append("eeks");
    cout << x << endl;
    string n = "";
    for (int i = 0; i < str.length(); i++)
    {
        n = n + str[i];
    }
    cout << n << endl;

}