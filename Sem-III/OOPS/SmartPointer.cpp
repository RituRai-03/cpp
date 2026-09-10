//Smart Pointer

#include <memory>
#include <iostream>
using namespace std;

void myFunction(){
    unique_ptr <int> p1 (new int(50));
    // cout << *ptr;
    // cout <<*p1 << endl;
    // p1.reset(new int(60));
    unique_ptr <int> p2;
    // p2=p1;

    p2=move(p1);  
    cout << *p2;
    cout << *p1;
    

}
int main()
{
    myFunction();
    return 0;

}
