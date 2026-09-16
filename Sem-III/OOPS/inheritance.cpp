#include <iostream>
using namespace std;

class A
{
public:
    void f1()
    {
        cout << "A";
    };
    void f2();
};

class B : public A
{
public:
    void f1()
    {
        cout << "B";
    }; // overriding
    void f2(int x)
    {
        cout << "inside B, f2 :";
    }; // hiding
};

int main()
{
    B obj;
    // obj.f1();
    obj.f2(5);
}