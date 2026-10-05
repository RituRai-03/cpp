#include <iostream>
using namespace std;
class Box{
    int length;
    int breadth;
        public:
    void setData(int l, int b){
        length = l, breadth = b;
    }
    friend int calculateArea(Box b);

    int getlength(){ return length; }
    int getbreadth(){ return breadth; }
};
int calculateArea(Box b){
    return b.getlength()*b.getbreadth();
}

int main()
{
    Box b1;
    b1.setData(50, 5);
    // int area = b1.length * b1.breadth;
    int area = calculateArea(b1);
    cout << area;
    return 0 ;
}