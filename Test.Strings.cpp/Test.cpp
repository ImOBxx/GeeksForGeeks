#include <iostream>
using namespace std;

int main()
{
    string str = "OBiiiiii";
    int x = str.length();
    cout << x << endl;
    string y = str.substr(0, 4);
    cout << y << endl;
    for (char ch : str)
    {
        if (ch == 'i')
        {
            cout << "Character is a vowel" << endl;
            break;
        }
        if (ch == 'O')
        {
            cout << "Consonant";
            break;
        }
    }

}