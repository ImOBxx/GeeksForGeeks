#include <iostream>
#include <string>

using namespace std;

int main() {
    string input, result;

    // Input from user
    cout << "Enter a string: ";
    getline(cin, input);

    // Removing vowels using a for loop
    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;
        }
    }

    // Displaying the result
    cout << "String after removing vowels: " << result << endl;

    return 0;
}