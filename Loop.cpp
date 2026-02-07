#include <iostream>
using namespace std;

int main() {


//Printing A to Z

    char name;
    for(name = 'A'; name <= 'Z'; name = name+1){
        cout << name << " ";  
    }
    cout << endl;


//Reverse A to Z
        
    for(name = 'Z'; name >= 'A'; name = name-1){
        cout << name << " ";
    }

    cout << endl;


//Reversing number

    int n, i ;
    cout << "Enter a number: ";
    cin >> n;

    for(i=n; i>=1;i=i-1){
        cout << i << " ";
    }
    cout << endl;

 //Printing numbers with difference of 3   

    int m;
    for(m=1; m<=100; m=m+3){
        cout << m << " ";
    }
    cout << endl;

 //Multipltion Table

  int r,s;
  cout << "Enter the Table: ";
  cin >> r;

  
  for(s=1; s<=10; s=s+1){
    cout <<r<< " x " << s << " = " << r*s << endl;
  }
  cout << endl;
  
//Power of Number 

    int b,pow,j, num;
    cout << "Enter the number: ";
    cin >> b;
    cout << "Enter the power: ";
    cin >> pow;

    num = b;
    for(j=1; j<pow; j=j+1){
        num = num * b;
    }

    cout<<num;

  
}