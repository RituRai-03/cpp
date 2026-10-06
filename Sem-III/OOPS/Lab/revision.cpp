// 1.inline function , static Keyword and friend  function
// 2. constructor overloading, 

#include <bits/stdc++.h>
using namespace std;

class fun {
    int x;
    static int count;

 public:
     fun(int a){
        x = a;
        count ++;
     }
     inline void show(){
        cout <<"X = " <<x<<endl;
     }

     static void showCount(){
        cout << "Count = " <<count<<endl;
     }
     friend void add(fun, fun);
};

int fun::count = 0;
void add(fun a, fun b){
    cout <<"Sum = "<<a.x + b.x<<endl;
}
int main()
{
    fun f1(10), f2(20);

    f1.show();
    fun::showCount();
    add(f1, f2);
    return 0;
}