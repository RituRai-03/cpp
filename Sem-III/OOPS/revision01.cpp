#include <bits/stdc++.h>
using namespace std;

class Marks {
    int marks;

    public:
     Marks(int m){
        marks = m;
     }
    void showData()
    {
        cout << marks;
    }

    void operator ++(){
        marks += 1;
    }

};
int main()
{
    Marks s1(30);
    ++s1;
    s1.showData();
return 0;
}
