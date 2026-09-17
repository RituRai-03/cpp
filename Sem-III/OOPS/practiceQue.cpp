//Create a base class Shape and derived class Circle, both with 
//non-virtual function draw(). Show that which function, compiler will call due to
//early binding in derived class.

#include <iostream>
using namespace std;

class shape 
{
    public:

      void draw()
     {
      cout << "Drawing Shape\n";
     }
};

class circle : public shape
{
    public:
  void draw()
  {
    cout << "Circle \n";
  }
};

int main()
{
   circle obj1;
   obj1.draw();  
   return 0;
}