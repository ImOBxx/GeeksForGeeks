#include <iostream>
using namespace std;

class Player
{
    static int count; // static count variable
public:
    Player() // Public constructor
    {
        count++;
    }
    ~Player() // Destructor
    {
        count--;
    }
    static int getCount() // Static member function to access count
    {
        return count;
    }
};

int Player::count = 0;

int main()
{
    Player p1;
    cout << Player::getCount() << " "; // Access static count using a static member function
    Player p2;
    cout << Player::getCount() << " ";
    return 0;
}

