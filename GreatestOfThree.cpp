#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter A, B, C: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "A Is The Greatest";
    }
    else if (b > a && b > c)
    {
        cout << "B Is The Greatest";
    }
    else
    {
        cout << "C Is The Greatest.";
    }
}
