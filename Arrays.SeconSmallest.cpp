#include <climits> 
#include <iostream> 
using namespace std; 
  
void print2Smallest(int arr[], int n) 
{ 
    int first, second; 
  
    if (n < 2) { 
        cout << " Invalid Input "; 
        return; 
    } 
  
    first = second = INT_MAX; 
    cout << "First: " << first << endl;
    for (int i = 0; i < n; i++) { 
        // If current element is smaller than first 
        // Then update both first and second 
        if (arr[i] < first) { 
            second = first; 
            first = arr[i]; 
        } 
  
        // If arr[i] is in between first and second 
        // Then update second 
        else if (arr[i] < second && arr[i] != first) 
            second = arr[i]; 
    } 
    if (second == INT_MAX) 
        cout << "There is no second smallest element\n"; 
    else
        cout << " Second smallest element is " << second 
             << endl; 
} 
  
int main() 
{ 
    int arr[] = { 21, 3, 15, 41, 34, 10 }; 

    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Size: " << n << endl;
  
    print2Smallest(arr, n); 
  
    return 0; 
}
