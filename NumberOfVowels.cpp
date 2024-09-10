#include <iostream>
using namespace std;

int main()
{
    string str;
    int vowels = 0;
    cout << "Enter String: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ) {
            vowels++;
        }
    }
cout << "Number of Vowels in the String: " << vowels << endl;
    }
