#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string str;
    cout << "Enter The String: " << endl;
    getline (cin, str);
    for (int i = 0; str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            continue;
    }
    else if (str[i] == 'e' || str[i] == 'E') {
        continue;
    }
    else if (str[i] == 'i' || str[i] == 'I') {
        continue;
    }
    else if (str[i] == 'o' || str[i] == 'O') {
        continue;
    }
    else if (str[i] == 'u' || str[i] == 'U') {
        continue;
    }
    else {
        cout << str[i];
    }
    }
    

    
}