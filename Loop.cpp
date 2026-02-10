// #include <iostream>
// using namespace std;

// int main() {


// //Printing A to Z

//     char name;
//     for(name = 'A'; name <= 'Z'; name = name+1){
//         cout << name << " ";  
//     }
//     cout << endl;


// //Reverse A to Z
        
//     for(name = 'Z'; name >= 'A'; name = name-1){
//         cout << name << " ";
//     }

//     cout << endl;


// //Reversing number

//     int n, i ;
//     cout << "Enter a number: ";
//     cin >> n;

//     for(i=n; i>=1;i=i-1){
//         cout << i << " ";
//     }
//     cout << endl;

//  //Printing numbers with difference of 3   

//     int m;
//     for(m=1; m<=100; m=m+3){
//         cout << m << " ";
//     }
//     cout << endl;

//  //Multipltion Table

//   int r,s;
//   cout << "Enter the Table: ";
//   cin >> r;

  
//   for(s=1; s<=10; s=s+1){
//     cout <<r<< " x " << s << " = " << r*s << endl;
//   }
//   cout << endl;
  
// //Power of Number 

//     int b,pow,j, num;
//     cout << "Enter the number: ";
//     cin >> b;
//     cout << "Enter the power: ";
//     cin >> pow;

//     num = b;
//     for(j=1; j<pow; j=j+1){
//         num = num * b;
//     }

//     cout<<num;

  
// }



//Sum of first n natural numbers

#include <iostream>
using namespace std;

int main() {

//     int n,i,sum=0;
//     cout << "Enter a number: ";
//     cin >> n;

//     for(i=1; i<=n; i=i+1){
//         sum = sum + i;
//     }

//     cout << sum << endl;


//Sum of first n odd numbers

    // int m,j,odd_sum=0;
    // cout << "Enter a number: ";
    // cin >> m;

    // for(j=1; j<=m; j=j+1){
    //     odd_sum = odd_sum + (2*j-1);
    // }
    // cout << odd_sum << endl;



    //sum of first n even numbers

    // int k,l,even_sum=0;
    // cout << "Enter a number: "; 
    // cin >> k;

    // for(l=1; l<=k; l=l+1){
    //     even_sum = even_sum + (2*l);
    // }
    // cout << even_sum << endl;
    

    //Prime number

//     int n, i;
//     cout << "Enter a number: ";
//     cin >> n;

//     if(n<2)
//     {
//         cout << "Not a prime number" << endl;
//         return 0;
//     }
//     else
//     {

//     for(i=2; i<=n/2; i=i+1){
//         if(n%i==0)
//         {
//             cout << "Not a prime number" << endl;
//             return 0;
//         }   
//     }
//        cout << "Prime number" << endl;
//        return 0;
// }




//Fibbonacci series

    // int n, a=0, b=1, c, i;
    // cout << "Enter the number of terms: ";
    // cin >> n;

    // cout << a << " " << b << " ";
    // for(i=3; i<=n; i=i+1){
    //     c = a + b;
    //     cout << c << " ";
    //     a = b;
    //     b = c;
    // }
    // cout << endl;


    //Factrial of a number

    int n , i, fact=1;
    cout << "Enter a number: ";
    cin >>n;

    for(i=1; i<=n; i=i+1){
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;
}