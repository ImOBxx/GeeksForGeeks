#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    string address;
};

int main()
{
    Student s = {101, "ABC", "XYZ"};
    cout << s.rollNo << " "
         << s.name << " "
         << s.address;
    return 0;
}