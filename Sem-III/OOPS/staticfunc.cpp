#include<iostream>
using namespace std;

// int fun1()
// {
//     int y = 10;
//     static int x=5;
//     x++;
//     y++;
//     cout<<y<<endl;
//     cout<<x<<endl;
 
// };

// int main()
// {
//  fun1();
//  fun1();

// }

class Account{
    private:
    int balance;
    static float  roi;

    public:
    void  setbalance(int b){
        balance=b;
    }

   static void showdata(){
        cout << roi << endl;
    }
};

float Account::roi=2.5;

int main()
{
    Account s1,s2;
    // s1.showdata();
    Account::showdata();
}