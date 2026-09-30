#include <iostream>
using namespace std;

class Marks{
    int marks;

    public:
    Marks(int m){
        marks=m;
    }

    void showmarks()
    {
        cout << marks;
    }

    void operator ++()
    {
        marks +=1;
    }

    friend void operator --(Marks &m);

};

void operator --(Marks &m)
    {
        m.marks -=1;
    }


int main()
{
    // int x = 5;
    // cout << x++ << endl;
    // cout << x;
    Marks s1(50);
    s1.showmarks();
    cout <<endl;
    ++s1;
    s1.showmarks();
    cout << endl;
    --s1;
    s1.showmarks();

}