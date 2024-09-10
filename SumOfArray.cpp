#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Values: ";
        cin >> arr[i];
    }
    int sum = 0;
    
    for (int i = 1; i <= n; i++)
    {
        sum = sum + arr[i];
        
    }
    cout << "Sum: " << sum << endl;

}