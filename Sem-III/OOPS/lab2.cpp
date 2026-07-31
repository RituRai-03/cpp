// Develop a program to demonstrate parameter passing techniques (call by value, reference, and address) 
// and analyze their effects on variable modification.	

#include <bits/stdc++.h>
using namespace std;

class Addition {
    private:
      int a,b;
    public:
      void setData(int a1, int b1){
        a=a1;
        b=b1;
      }
      
      //Overloaded function
      int add(){
        return a + b;
      }

}