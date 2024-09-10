#include <iostream>
using namespace std;

struct Point //user defined data type;
{
    int x;
    int y;
};

int main()
{
    cout << "\n";
    struct Point p; // "struct" optional in c++, mandatory in c programming
    p.x = 10;
    p.y = 20;
    cout << p.x << " " << p. y << endl;
    cout << "\n";
    return 0;
    cout << "\n";
}
