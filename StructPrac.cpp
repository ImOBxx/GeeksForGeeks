#include <iostream>
using namespace std;

struct XYZ
{
   int a;
   int b;
   int sum = 0;
};

int main()
{
    XYZ xyz;
    xyz.a = 15;
    xyz.b = 15;
    xyz.sum = xyz.a + xyz.b;
    cout << xyz.a << endl;
    cout << xyz.b << endl;
    cout << xyz.sum << endl;

}