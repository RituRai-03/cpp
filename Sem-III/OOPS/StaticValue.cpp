#include <iostream>
using namespace std;

void fun(){
    int x;
    static int y;
    cout << x<< endl << y;
    x++;
    y++;
}

int main(){
    fun();
    fun();
    fun();
    return 0;
}