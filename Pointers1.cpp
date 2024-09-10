#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int *p;
    p = &x;
    cout << x << "\n";
    cout << *p << "\n";
    cout << p << "\n";
    return 0;
}