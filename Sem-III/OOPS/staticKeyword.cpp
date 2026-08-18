#include <iostream>

using namespace std;

class  Account 
{
    public: 
        int balance;
        static float roi;

        public:
         void setBalance(int b){
            balance = b;
            cout <<balance;
         }
};

float Account::roi = 3.5f;

int main()
{
    // clrscr();
    Account a1, a2;
    // a1.setBalance(5);
    cout << Account::roi;
    // getch();
    
}


