//Write a program in c++ for function overloading

#include <bits/stdc++.h>
using namespace std;

class Addition {
    private:
    int a, b;
    public:
    void setData(int a1, int b1);
    };

    void Addition::setData(int a1, int b1) {
        a = a1;
        b = b1;
    }
 
    int main()
    {
        Addition x;
        x.setData(10, 20);
        return 0;
    }


