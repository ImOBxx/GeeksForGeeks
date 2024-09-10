#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Character: ";
    cin >> ch;
    if (isalpha(ch)) {
        cout << ch << " is an Alphabet. " << endl;
    }
    else {
        cout << ch << " is not an Alphabet. " << endl;
    }
}