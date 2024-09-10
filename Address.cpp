#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 10;
    int z = x + y;
    cout << &x << "\n";
    cout << *(&x) << "\n";
    cout << &y << endl;
    cout << *(&y) << endl;
    cout << &z << endl;
    cout << *(&z) << endl;
    return 0;
}

