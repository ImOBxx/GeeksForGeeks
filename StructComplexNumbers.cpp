#include <iostream>
using namespace std;

struct complx 
{
    int real, imag;
};

int main()
{
    complx n1, n2, n3;
    cout << "Enter Number: ";
    cin >> n1.real;
    cout << "Enter Number: ";
    cin >> n1.imag;
    cout << "Enter Number: ";
    cin >> n2.real;
    cout << "Enter Number: "; 
    cin >> n2.imag;

    n3.real = n1.real + n2.real;
    n3.imag = n1.imag + n2.imag;

    cout << n3.real << " + " << n3.imag << " i " << endl;

return 0;
}