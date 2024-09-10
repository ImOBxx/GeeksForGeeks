#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    // Calculate the average
    double average = sum / double(n);
    
    cout << "Average: " << average << endl;
    
    return 0;
}

