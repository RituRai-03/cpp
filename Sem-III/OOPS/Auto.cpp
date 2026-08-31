#include <bits/stdc++.h>
using namespace std;

int main()
{                       //Auto KeyWord


    // int a = 10, b = 20;
    // auto sum = a + b;
    // cout << sum << endl;
    // cout << typeid(sum).name();

    // auto i = 0, *p = &i;
    // auto i = 0, pi = 3.14; (error)

    // int a[5] = {2,3,4,5,6};
    // for(int i=0; i<5; i++)
    // {
    //     cout << a[i]<<endl;
    // }
  

                            //Range-Based for loop

    int array[5] ;
    // = {2,3,4,5,6};
    for( auto &a:array)
    {
        // cout << a<<endl;
        cout << "Enter some value: "<<endl;
        cin>>a;
    }
    for(int a:array)
    {
      cout << a << endl;
    }


    return 0;
}