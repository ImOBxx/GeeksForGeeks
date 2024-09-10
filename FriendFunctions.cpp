#include <iostream>
using namespace std;

class Employee; // Forward declaration

class Printer
{
public:
    void printEmp(const Employee &e); // Function declaration
};

class Employee 
{
private:
    int id;
    string name;

public:
    // Friend function declaration
    friend void Printer::printEmp(const Employee &e);

    // Constructor with initialization list
    Employee(int i, string n) : id(i), name(n) { }
};

// Function definition outside the class
void Printer::printEmp(const Employee &e) 
{
    cout << e.id << " " << e.name << " ";
}

int main()
{
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e);
    return 0;
}
