#include <bits/stdc++.h>
using namespace std;

class Box{
    private:
     int l,b,h;
    public:
    //  void setDimension(int x, int y, int z)
     void setDimension(int l, int b, int h)
     {
        // l=x,b=y,h=z;
        // l=l, b=b, h=h;
        this->l=l, this->b=b, this->h=h; //this pointer (refer current object)
     }

     void showDimension()
     {
        cout << l << endl << b << endl << h;
     }
};

int main()
{
    Box *p, smallBox;
    p=&smallBox;
    p->setDimension(5,10,15);
    p->showDimension();

}

//Create a counter class with a private account member
//Display method that show the count using this pointer.