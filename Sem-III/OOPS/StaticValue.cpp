// 

#include <bits/stdc++.h>
using namespace std;

class Account {
    private:
     int balance;
     static float roi;
     
    public:
     void setBalance(int b){
         balance = b;
     }
     static void setroi (float r){
        roi = r;
        cout << roi;
     }
};
float Account::roi=3.5f;
int main() {
	
    //Account a1,a2;
   // a1.setroi(4.5f);
  Account::setroi(4.5f);
}