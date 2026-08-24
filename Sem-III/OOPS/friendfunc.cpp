//Friend Function
#include <iostream>
using namespace std;

// class Complex
// {
//     private:
//      int a ,b;
//     public:
//      void SetData(int x, int y)
//      {
//         a = x;
//         b = y;
//      }

//      void ShowData()
//      {
//         cout << a << endl << b;
//      }

//      friend void fun(Complex);
//     };

//      void fun (Complex c)
//     {
//         cout << c.a+c.b;
//     }

//     int main(){
//         ;
//         Complex c1;
//         c1.SetData(5,4);
//         fun(c1);
        
//     }


    //Write a friend funciton to add two complex numbers

    class Complex
{
     private:
     int a ,b;
    public:
     void SetData(int x, int y)
     {
        a = x;
        b = y;
     }


     void ShowData()
     {
        cout << a << endl << b;
     }

     friend Complex fun(Complex , Complex);
    };

     Complex fun (Complex c , Complex d)
    {
        Complex temp;
        temp.a=c.a+d.a;
        temp.b=c.b+d.b;
        return temp;
        
    }

    int main(){
        
        Complex c1, c2, c3;
        c1.SetData(5,4);
        c2.SetData(2,3);
        c3 = fun(c1,c2);
        c3.ShowData();
        
    }

    
    