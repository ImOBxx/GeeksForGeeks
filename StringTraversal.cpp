#include <iostream>
using namespace std;

int main()
{
    string str = "gfg";
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    cout << endl;

    for (char x : str)
         cout << x;
    cout << endl;

}