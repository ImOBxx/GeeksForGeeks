#include <iostream>
using namespace std;

union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    MyUnion u;

    // Assigning values to the union members
    u.intValue = 65;
    cout << "Integer value: " << u.intValue << endl;

    u.floatValue = 3.14;
    cout << "Float value: " << u.floatValue << endl;

    u.charValue = 'A';
    cout << "Character value: " << u.charValue << endl;

    // Printing all members again
    cout << "After changing to character, integer value: " << u.intValue << endl;
    cout << "After changing to character, float value: " << u.floatValue << endl;
    cout << "After changing to character, character value: " << u.charValue << endl;

    return 0;
}
