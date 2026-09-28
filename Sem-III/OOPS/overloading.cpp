#include <iostream>
using namespace std;

class Marks
{
    private:
    int marks;

    public:
    Marks(int m)
    {
        marks=m;
    }
    void showmarks()
    {
        cout << marks<< endl;
    }

    void operator+=(int extramarks)
    {
     
        marks=marks+extramarks;
    }    

        friend void operator-=(Marks &, int);
};
  
   void operator-=(Marks &m, int plenty)
    {
        m.marks=m.marks-plenty;
    }


int main()
{
    Marks s1(40);
    s1.showmarks();
    s1+=5;
    s1.showmarks();
    s1-=10;
    s1.showmarks();
    return 0;
}