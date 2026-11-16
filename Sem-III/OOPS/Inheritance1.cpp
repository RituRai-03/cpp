/*Inheritance OOP ka ek important feature hai jisme ek class doosri class ke 
properties (data members) aur functions (member functions) ko acquire kar sakti hai

class Base_class{

    
};

class Derived_class : visibility_Mode Base_class{

};

                                  Types of Inheritance

    
    1. Single Inheritance

      class A {
      };
      class B : public A{
      };

    2. Multi level Inheritance

       class A{
       };
       class B: public A{
       };
       class C : public B{
       };

    3. Multiple

       class A {
       };
       class B{
       };
       class c : public a, public B{
       };

    4. Hieriachal Inheritance

        class A {
        };
        class B : public A{
        };
        class C : public A{
        };
        

*/

//Program to check visibility

#include <iostream>
using namespace std;

class A
{ 
   public:
      int a =10;
   protected:
      int b = 20;
   private:
       int c = 30;
};

// Public inheritance
class PublicChild : public A {
   public :
      void show(){
         cout << a << endl;
         cout << b << endl;
         //cout << c;
      }
};

// Protected inheritance
class ProtectedChild : protected A {
public:
    void show() {
        cout << a << endl;  // Allowed
        cout << b << endl;  // Allowed
    }
};

// Private inheritance
class PrivateChild : private A {
public:
    void show() {
        cout << a << endl;  // Allowed
        cout << b << endl;  // Allowed
    }
};

int main() {
    PublicChild p;
    ProtectedChild q;
    PrivateChild r;

    p.show();
    q.show();
    r.show();

    // p.a = 50;  // Allowed
    // q.a = 50;  // Error
    // r.a = 50;  // Error

    return 0;
}