#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;
    getline(cin, str);
    cout << str.size() << endl;
}