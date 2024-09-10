#include <iostream>
using namespace std;

int &fun()
{
    static int x = 10;
    return x;
}

int main()
{
    int &z = fun();
    cout << fun() << " ";
    z = 30;
    cout << fun() << endl;
    return 0;
}

// cannot be null;
// creates an alias;
// safer.
// easier to use;
// must be assigned to another location.
// cannot refer to another location.

