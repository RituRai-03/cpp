// #include <bits/stdc++.h>
// using namespace std;

// class Marks {
//     int marks;

// public:
//     Marks(int m) {
//         marks = m;
//     }
    
//     void showData() {
//         cout << marks;
//     }

//     // Friend function declaration for pre-decrement
//     friend Marks operator --(Marks &m);
// };

// // Corrected operator definition matching the declaration
// Marks operator --(Marks &m) {
//     m.marks -= 1;
//     return m;
// }

// int main() {
//     Marks s1(30);
    
//     // Decrements s1 and chains showData()
//     (--s1).showData();
    
//     return 0;
// }

#include <iostream>
using namespace std;

class Marks{
    int marks;

    public:
    Marks(int m){
        marks=m;
    }

    void showmarks()
    {
        cout << marks;
    }

    Marks operator ++(int)
    {   
        Marks duplicate(*this);
        // marks +=1;
        marks = marks + 1;
        return duplicate;
    }

    // friend void operator --(Marks &m);

};


int main()
{
    Marks s1(50);
    s1.showmarks();
    cout <<endl;
    (s1++).showmarks();
    cout << endl;
    s1.showmarks();
    return 0;

}