
                         //FUNCTION


            //Squaring using function

// #include <iostream>
// using namespace std;
// void hello(){
//     cout << "Hello World!" << endl;
// }

// int square(int x){
//     return x*x;
// }

// int main(){
//     hello();
//     int result = square(5);
//     cout << "Square of 5 is: " << result << endl;
//     return 0;
// }


                //MUltiplication using function

// #include <iostream>
// using namespace std;
// void greet(){
//     cout << "Welcome to C++ Programming!"<< endl;
// }

// int multiply(int a ,int b){
//     return  a*b;
// }

// int main(){

//     greet ();
//     int result = multiply (4,5);
//     cout << "Multiplication result:" << result << endl;

//     return 0;     
// }


            //Printing numbers using function

// #include <iostream>
// using namespace std;

// void printNum(int n){
//     cout << n << endl;
// }

// int main(){
//     int num1 = 10;
//     int num2 = 99;

//     printNum(num1);
//     printNum(num2);

//     return 0;
// }

             //Swapping using call by function

// #include <iostream>
// using namespace std;

// void swap(int x, int y){
//     int t = x;
//     x = y;
//     y = t;

//     cout << "After Swapping in function x:" << x << ", y" << y << endl;
// }

// int main(){
//     int x = 1, y = 2;

//     cout << "Before Swapping : " 
//     cout << "x:" << x << ", y:" << y << endl;

//     swap(x, y);

//     cout << "After Swapping: ";
//     cout << "x:" <<  x << ", y:" << y << endl;

//     return 0;
// }


            //Call by reference using & operator

// #include <iostream>
// using namespace std;

// void func(int& x) {
//     x--;

// }

// int main(){
//     int a = 5;
//     cout << a << endl;
//     func(a);
//     cout << a;
// }

            //Recursion Example


// #include <iostream>
// using namespace std;

// void printHello(int n){
//     if (n == 0) return;

//     cout << "Hello" << endl;

//     printHello(n-1);
// }

// int main(){
//     printHello(5);

//     return 0;
// }


                             //STRING 
                             
// #include <iostream>
// #include <string>
// using namespace std;

//  class Employee {

//     //Instace variables `

//     private:
//       string name;
//       float salary;

//     public:
     
//     //Constructor
//        Employee(string name, float salary) {
//         this -> name = name;
//         this -> salary = salary;
//        }  

 

//  //getters methods

//  string getName(){
//     return name;
//  }

//  float getSalary(){
//     return salary;
//  }  

//  //setters methods

//  void setName(string name) {
//     this -> name = name;
//  }

//  void setSalary(float salary) {
//     this -> salary = salary;
//  }

//  //Instance method  

//  void displayDetails(){
//     cout << "Employee: " << name << endl;
//     cout << "Salary: " << salary << endl;
//  }

// };

// int main (){
//     Employee emp("Geek", 10000.0f);
//     emp.displayDetails();
    
//     return 0;
// }




            //Abstraction

// #include <iostream>
// using namespace std;

// //Abstract class vehicle 

// class Vehicle {

//     public:
      
//       //Abstract Methods
//       virtual void accelerate() = 0;

//       //pure virtual function
//       virtual void brake() = 0;

//       void startEngine(){
//         cout << "Engine started!" << endl;
//       }

// };

// class Car : public Vehicle {
//     public :

//      //Implemnet abstract methods
//      void accelerate() override {
//        cout << "Car: Pressing gas pedal..." << endl;
//      } 

//      void brake() override {
//         cout << "Car: Applying brakes..." << endl;
//      }
// };

// int main() {

//     //create object using pointer to abstract class
//     Vehicle* myCar = new Car();
//     myCar ->startEngine();
//     myCar ->accelerate();
//     myCar ->brake();

//     delete myCar;

//     return 0;
// }


         //Encapsulation
        
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {

//     //Private fields

// private : 
//   int id;
//   string name;

// public :
//   //Setter method

//   void setId(int id ){
//     this ->id = id;
//   }

//   void setName(string name){
//     this ->name = name;
//   }

//   //Getter method 
//   int getId() {
//     return id;
//   }

//   string getName(){
//     return name ;
//   }
// };

// int main (){
//     Employee emp;

//     //Using setters
//     emp.setId(101);
//     emp.setName("Geek");

//     // Using getter
   
//     cout << "Employee ID: " << emp.getId() << endl;
//     cout << "Employee Name: " << emp.getName() << endl;

//     return 0;
// }


        //Inheritance


// #include <iostream>
// using namespace std;

// //superclass (Parent)

// class Animal {

//     public:
      
//       void eat(){
//         cout << "Animal is eating..." << endl;
//       }

//       void sleep(){
//         cout << "Animal is sleeping..." << endl;
//       }
// };

// //subclass (Child) - Inherits from Aniaml 
// class Dog  : public Animal {

//     public:
//     void bark(){
//         cout << "Dog is barking!" << endl;
//     }
// };

// int main(){
//     Dog myDog;

//     //Inherited methods (from Animal)

//     myDog.eat();
//     myDog.sleep();

//     //Child class method 

//     myDog.bark();
//     return 0;

// }



#include <iostream>
using namespace std;
int main(){
        int num[5]={10,20,30,40,50};
        cout<< "Element at index 0:"<< num[0]<< endl;
        cout<< "Element at index 2:"<< num[2]<< endl;
        num[1]=25;
        cout << "Modified element at index 1: " << num[1]<< endl;
        return 0;

}