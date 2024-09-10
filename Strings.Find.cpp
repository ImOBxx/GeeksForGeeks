#include <iostream>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    int res = str.find("f");
    cout << res << endl;
    if (res == string :: npos)
        cout << "Not Present. ";
    else{
        cout << "First Occurence" << "at Index: " << res << endl;

    } 
}