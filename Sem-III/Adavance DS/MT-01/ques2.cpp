/*Aim:  Given an integer N,
compute the factorial and the Nth Fibonacci number using recursion and related problems based on 
recursion without using an iterative constructs. */

#include <iostream>
using namespace std; 
int factorial(int n) { 
    if (n == 0 || n == 1) 
    return 1; 
  return n * factorial(n - 1);
 } 
 int fibonacci(int n) { 
    if (n == 0) 
    return 0; 
    if (n == 1) 
    return 1; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
} int main() 

{ int n; 
  cout << "Enter n: ";
  cin >> n; 
  cout << "Factorial of " << n << " = " << factorial(n) << endl; 
  cout << "Nth Fibonacci number = " << fibonacci(n)<<endl;

  return 0;
}
  