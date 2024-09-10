#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 1;
    cout << "Enter Number: ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Values: ";
        cin >> arr[i];
        cout << arr[i] << endl;
    }
 
    for (int i = 1; i <= n; i++)
    {
       sum = sum * arr[i];
       
    }
    cout << "Product Of Array: " << sum << endl;
}