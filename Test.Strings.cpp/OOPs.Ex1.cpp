#include <iostream>
using namespace std;

class Complex
{
   private:
   int real;
   int imag;

   public:

   void print()
   {
     cout << real << " + i" << imag << endl;
   }

   Complex (int r, int i)
   {
     real = r;
     imag = i;
   }
};

int main()
{
    Complex C1(10, 15);
    C1.print();
    return 0;
}