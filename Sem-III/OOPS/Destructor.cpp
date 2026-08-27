                                //Destructor 

// #include <iostream>
// using namespace std;

// class Complex{
//     private:
//      int a,b;
//     public:

//     Complex(){
//         cout << "I am Constructor."<<endl;
//     }

//      ~Complex()
//      {
//         cout<<"Hello, I am Destructor.";
//      }
// };

// void fun(){
//     Complex obj;
// }
// int main(){
//     // Complex o1;
//     fun();
// }


//Define a class circle with private members 
//(a).private member float radius
//(b).default Constructor to set radius = 1.0
//(c).parametrized constructor to set a paticular value
//(d).Destructor to destroy objects
//(e). area() to calculate area of circle.
//int main() --- one function for default constructor / one function for parametrized constructor

#include <bits/stdc++.h>
using namespace std;

class Circle {
    private:
     float radius;
   
    public:
     Circle(){
        radius = 1.0;
        cout <<"Default Constructor (Radius = " << radius <<")" << endl;

     } 

     Circle(float r){
        radius = r;
        cout <<" Parametrized"<< radius << endl;
     }

     ~Circle(){
        cout << "Destructor " <<radius << endl;
     }
   float area(){
    return 3.14 * radius * radius;
   }
    
};

int main(){
    Circle c1;
     cout <<" Area of c1: "<< c1.area() << endl;
   
    Circle c2(5.5);
    cout << "Area of c2: " << c2.area() << endl;

    return 0;
    
}