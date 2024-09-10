#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Character: ";
    cin >> ch;
    if (isalpha(ch)) 
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A' || ch == 'E'
            || ch == 'I' || ch == 'O' || ch == 'U') { 
            cout << ch << " is a vowel." << endl; 
            }
        else {
        cout << ch << " is a Consonant. " << endl;
        }
    }
     else { 
        cout << ch << " is not an alphabet." << endl; 
    } 
  
    return 0; 

}