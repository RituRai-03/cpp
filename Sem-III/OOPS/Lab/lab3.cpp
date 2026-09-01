// 3	Implement a program to demonstrate inline functions, default arguments, and function overloading for performing arithmetic operations.	1

#include <iostream>
using namespace std;

// Inline function
inline int add(int a, int b)
{
    return a + b;
}
// Function with default argument
int subtract(int a, int b = 5)
{
    return a - b;
}
// Function overloading
int multiply(int a, int b)
{
    return a * b;
}
double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    int a = 20, b = 10;
    cout << "Addition: " << add(a, b) << endl;

    cout << "Subtraction: " << subtract(a) << endl;
    cout << "Subtraction: " << subtract(a, b) << endl;

    cout << "Multiplication: " << multiply(a, b) << endl;
    cout << "Multiplication: " << multiply(5.5, 2.0) << endl;

    return 0;
}