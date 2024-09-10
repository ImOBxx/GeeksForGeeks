#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    getline (cin, str);
    int x = str.length();
    /*for (int i = 0; i < x; i++)
    {
       cout << str[i];
    }
     cout << endl;*/

    for (char ch : str)
    {
        x = char (ch);
        cout << ch;
    }
    cout << endl;

}