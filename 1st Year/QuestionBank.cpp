// #include <iostream>
// using namespace std;


// 3. Program to check whether  a triangle is isosceles, equilateral, 
// scalene or right angle triangle.

// int main() {
//     double a, b, c;

//     cout << "Enter three sides of the triangle: ";
//     cin >> a >> b >> c;

//     // 1. Check for Triangle Validity
//     if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
//         cout << "The triangle is: ";

//         // 2. Check for Equilateral, Isosceles, or Scalene
//         if (a == b && b == c) {
//             cout << "Equilateral ";
//         } 
//         else if (a == b || b == c || a == c) {
//             cout << "Isosceles ";
//         } 
//         else {
//             cout << "Scalene ";
//         }

//         // 3. Check for Right-Angled (Separate check because a triangle can be both)
//         // Using Pythagoras: a^2 + b^2 = c^2
//         double a2 = a * a;
//         double b2 = b * b;
//         double c2 = c * c;

//         if ((a2 + b2 == c2) || (a2 + c2 == b2) || (b2 + c2 == a2)) {
//             cout << "and Right-Angled";
//         }
//         cout << endl;

//     } else {
//         cout << "These sides do not form a valid triangle." << endl;
//     }

//     return 0;
// }




// Find the sum of digits of an integer number entered by the user.


// #include <iostream>
// #include <cmath> // For abs() function

// using namespace std;

// int main() {
//     int num, originalNum, digit, sum = 0;

//     cout << "Enter an integer: ";
//     cin >> num;

//     // Store original for display and handle negative numbers
//     originalNum = num;
//     num = abs(num); 

//     while (num > 0) {
//         // 1. Get the last digit (e.g., 123 % 10 = 3)
//         digit = num % 10;

//         // 2. Add digit to the running total
//         sum += digit;

//         // 3. Remove the last digit (e.g., 123 / 10 = 12)
//         num = num / 10;
//     }

//     cout << "The sum of digits of " << originalNum << " is: " << sum << endl;

//     return 0;
// }


    
        // Reverse an integer number entered by the user.



// #include <iostream>
// using namespace std;

// int main(){
//     int n, reversedNum = 0, remainder;

//     cout << "Enter an interger: ";
//     cin >> n;

//     while (n != 0){
//         remainder = n % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         n /= 10;
//     }

//     cout << "Reversed Number: " << reversedNum << endl;

//     return 0;
// }




// Write a program that takes two operands and one operator from the user and 
// perform the operation and print the result by using switch statement.

// #include <iostream>
// using namespace std;

// int main() {
//     char op;
//     double num1, num2;

//     cout << "Enter an operator (+, -, *, /): ";
//     cin >> op;

//     cout << "Enter two operands: ";
//     cin >> num1 >> num2;

//     if (op == '+') {
//         cout << num1 << " + " << num2 << " = " << num1 + num2;
//     } 
//     else if (op == '-') {
//         cout << num1 << " - " << num2 << " = " << num1 - num2;
//     } 
//     else if (op == '*') {
//         cout << num1 << " * " << num2 << " = " << num1 * num2;
//     } 
//     else if (op == '/') {
//         if (num2 != 0) {
//             cout << num1 << " / " << num2 << " = " << num1 / num2;
//         } else {
//             cout << "Error! Division by zero is not allowed.";
//         }
//     } 
//     else {
//         cout << "Error! The operator is not correct.";
//     }
//     cout << endl;
//     return 0;
// }


// Print the real roots of a quadratic equation. 

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     float a, b, c, d, r1, r2;
//     cout << "Enter a, b, c: ";
//     cin >> a >> b >> c;

//     d = b*b - 4*a*c; 

//     if (d > 0) {
//         r1 = (-b + sqrt(d)) / (2*a);
//         r2 = (-b - sqrt(d)) / (2*a);
//         cout << "Roots: " << r1 << " and " << r2;
//     } 
//     else if (d == 0) {
//         cout << "Root: " << -b / (2*a);
//     } 
//     else {
//         cout << "No real roots.";
//     }

//     return 0;
// }



//Program to check entered number is palindrome or not.

// #include <iostream>
// using namespace std;

// int main() {
//     int num, first, last;

//     cout << "Enter a 3-digit number: ";
//     cin >> num;

//     first = num/100;
//     last = num % 10;

//     if(first == last){
//         cout << num << "is a Palindrome." << endl;
//     }else{
//         cout << num << "is not a Palindrome." << endl;
//     }

//     return 0;
// }



    // Fibonacci series and their sum

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 0, b = 1, next = 0;
//     int sum = 0, count = 0;

//     cout << "Fibonacci series less than 100: " << endl;

//     while (a<100){
//         cout << a << " ";

//         sum += a;
//         count++;

//         next = a + b;
//         a = b;
//         b = next;
//     }

//     cout << "\nTotal Count: " << count << endl;
//     cout << "Total Sum: " << sum << endl;

//     return 0;
// }



//Pattern program for-   
                    //       2 3 4 5 6 7 
			        //    3 4 5 6 7 
			        //    4 5 6 7 
			        //    5 6 7
			        //    6 7 
			        //    7


// #include <iostream>
// using namespace std;

// int main (){
//     int startValue = 2;
//     int endValue = 7;

//     for (int i = startValue; i <= endValue; i++){
//         for (int j = i; j <= endValue; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }




