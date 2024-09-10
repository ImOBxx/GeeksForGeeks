#include <iostream>
using namespace std;

int main()
{


string str = "GeeksForGeek$";
string result = " "; 

for (char c : str) { 
    cout << c << endl;
        if (isalpha(c)) { 
            result += c; 

        } 
    } 
    cout << result << endl;

}