#include <iostream>
using namespace std;

void fun (string *s)
{
    cout << *s << endl;
}

int main()
{
    string s = "geeksforgeeks courses";
    fun (&s);
    return 0;
}
