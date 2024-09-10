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
        cout << "Enter Array Values: " << endl;
        cin >> arr[i];
    }
    int sum = 0;
    int avg = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + arr[i];
        avg = sum / arr[n];
    }
    cout << "Average: " << avg << endl; 
}