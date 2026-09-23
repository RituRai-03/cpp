//Operator Overloading 

#include <iostream>
using namespace std;

class marks{
    int intmarks;
    int extmarks;

    public:
      marks()
      {
        intmarks=0;
        extmarks-0;
      }
      marks(int im, int em)
      {
        intmarks=im; extmarks=em;
      }

      marks operator+(marks m)
    { 
    marks temp;
    temp.intmarks = intmarks + m.intmarks;
    temp.extmarks = extmarks + m.extmarks;
    return temp;
   }

      void display()
      {
        cout << intmarks<< endl << extmarks;
      }
};

int main()
{
    marks m1(20,25), m2(30,32);
    marks m3 =m1 + m2;
    m3.display();
}