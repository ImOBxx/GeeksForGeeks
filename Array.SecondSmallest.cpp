#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {23, 3, 15, 41, 34, 10};
    int n = sizeof(arr) / sizeof (arr[0]);

    cout << "Size: " << n << endl;

    if (n < 2) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == INT_MAX) {
        cout << "There is no second smallest element" << endl;
    } else {
        cout << "Second smallest element is " << second << endl;
    }

    }


