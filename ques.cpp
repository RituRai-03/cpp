
//1. Swapping Two Numbers using Call by Reference


// #include <iostream>
// using namespace std;

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;
//     swap(x, y);  
//     cout << "After swapping: " << x << " " << y;
//     return 0;
// }


// 2.Factorial of a Number using Recursion

// #include <iostream>
// using namespace std;    

// int factorial(int n) {
//     if (n<=1)
//       return 1;
//       return n*factorial(n-1);

// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Factorial of " << num << " is " << factorial(num);
//     return 0;
// }


//3. Fibonacci Series using recursion

// #include <iostream>
// using namespace std;
// int fibonacci(int n) {
//     if (n<=1)
//       return n;
//       return fibonacci(n-1) + fibonacci(n-2);
// }

// int main() {
//     int terms;
//     cout << "Enter number of terms: ";
//     cin >> terms;
//     cout << "Fibonacci Series: ";
//     for (int i = 0; i < terms; i++) {
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;
// }


//4.