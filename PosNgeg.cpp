#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if (n > 0)
    {
        cout << "The Number Is A Positive Number." << endl;
    }
    else if (n < 0)
    {
        cout << "The Number Is A Negative Number." << endl;
    }
    else if (n == 0)
    {
        cout << "The Number Is Zero." << endl;
    }
}