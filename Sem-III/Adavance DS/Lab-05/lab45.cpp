//Factorial using Recursion

// #include <iostream>
// using namespace std;

// int Factorial(int n)
// {
//     if(n==0){
//      return 1;
//  }
//  return n * Factorial(n-1);
// }
// int main()
// {
//     int num;
//     cout << "Enter number:";
//     cin >> num;

//     if(num < 0){
//         cout << " "<<endl;
//     }else{
//         cout  << Factorial(num) << endl;
//     }
//     return 0;
// }

//Exponential using recursion

// #include <iostream>
// using namespace std;

// int power(int x, int n)
// {
//     if (n == 0)
//         return 1;

//     return x * power(x, n - 1);
// }

// int main()
// {
//     int x, n;

//     cout << "Enter base: ";
//     cin >> x;

//     cout << "Enter exponent: ";
//     cin >> n;

//     cout << x << "^" << n << " = " << power(x, n);

//     return 0;
// }



// Reverse a number using Recursion

#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0)
{
    if (n == 0)
        return rev;
    rev = rev * 10 + n % 10;
    return reverseNumber(n / 10, rev);
}

int main()
{
    int n;
    cout << " ";
    cin >> n;
    cout << " " << reverseNumber(n);
    return 0;
}