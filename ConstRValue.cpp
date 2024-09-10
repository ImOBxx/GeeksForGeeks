#include <iostream>
using namespace std;

void fun (string &s)
{
    cout << s;
}
int main()
{
    fun ("user");
    return 0;
}