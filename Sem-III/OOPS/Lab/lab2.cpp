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

      //Call by Value

      int addByValue(int x, int y){
        return x + y;   
      }

      //Call by Reference

      int addByReference(int &x, int &y){
        int temp = x + y;
        x = x + 10;
        y = y + 10;
        return temp;
      }

      //Call by Address

      int addByAddress(int *x, int *y){
        int temp = *x + *y;
        *x = *x + 10;
        *y = *y + 10;
        return temp;
      }   

};

int main(){
  Addition obj;

  cout << "Enter two numbers: ";
  int a,b;
  cin >> a >> b;
  
 
cout << "\nBy Value Sum: " << obj.addByValue(a, b) << endl;
cout << "a = " << a << ", b = " << b << endl;

cout << "\nBy Reference Sum: " << obj.addByReference(a, b) << endl;
cout << "a = " << a << ", b = " << b << endl;

cout << "\nBy Address Sum: " << obj.addByAddress(&a, &b) << endl;
cout << "a = " << a << ", b = " << b << endl;

return 0;

}
 

