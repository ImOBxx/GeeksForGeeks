#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 30, 40, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sizeof(arr[0]) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}