#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    int s = str.length();
    cout << s << endl;
    cout << str.substr(0, 3) << endl;
    for (char ch : str) 
    {
       char x = (ch);
       cout << x << endl;
    }
}

