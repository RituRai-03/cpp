#include <bits/stdc++.h>
using namespace std;

class Marks {
    int marks;

    public:
     Marks(int x){
        marks = x;
     }
    void showData()
    {
        cout << marks;
    }

    Marks operator ++(){
        marks += 1;
        return *this;
    }

};
int main()
{
    Marks s1(30);
    // ++s1;
   (++s1).showData();
return 0;
}
