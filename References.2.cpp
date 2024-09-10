#include <iostream>
using namespace std;

void fun (int &x)
{
    x = x + 5;
}
int main()
{
    int x = 10;
    fun (x);
    cout << x << endl;
    return 0;
}