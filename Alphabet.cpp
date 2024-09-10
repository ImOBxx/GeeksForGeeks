#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Character: ";
    cin >> ch;
    if (isalpha (ch)) {
        cout << ch << " is an alphabet." << endl;
    }
    else if 
     (isdigit(ch)) { 
    
        cout << " is not an alphabet." << endl;
    }
    return 0;
}
