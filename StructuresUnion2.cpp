#include <iostream>
using namespace std;

typedef struct Point
{
    int x;
    int y;
} P;

int main()
{
    P p;
    p.x = 10;
    p.y = 20;
    printf("%d, %d\n", p.x, p.y);
    return 0;
}