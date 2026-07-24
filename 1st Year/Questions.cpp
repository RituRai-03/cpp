/*//Write a program to input two numbers and one operation
 choice(1.Addition, 2.Subtraction, 3. Multiplication, 4.
 Division).Perform the binary operation as per the given choice*/


//  #include<iostream>
//  using namespace std;

//  int main(){
//     int a, b, choice;
//     float result;

//     cout << "Enter two numbers:";
//     cin >> a >> b;

//     cout << "Choose operation:\n";
//     cout << "1. Additional\n2. Substraction\n3. Multiplication\n4. Division\n";
//     cin >> choice;

//     if (choice ==1){
//         result = a + b;
//         cout << "Result="<< result << endl;

//     }

//     else if (choice==2){
//         result = a - b;
//         cout << "Result=" << result << endl;
//     }

//     else if (choice == 3){
//         result = a * b;
//         cout << "Result= " << result << endl;
//     }
 
//     else if (choice ==4){
//         if (b!=0){
//             result = (float)a/b;
//             cout << "Result= " << result << endl;
//         }else {
//             cout << "Error: Division by zero is not allowed."<< endl;
//         }
//     }
//     else {
//         cout << "Invalid choice!" << endl;  
//     }

//     return 0;
//  }



// Generate and display the Fibonacci sequence up to a given
// limit.


// #include <iostream>
// using namespace std;

// int main(){
//     int limit;
//     int a=0, b=1, next;

//     cout << "Enter the limit:";
//     cin >> limit;

//     cout << "Fibonacci sequence up to " << limit << ":";

//     cout << a << " " << b << " ";

//     next = a + b;

//     while (next <= limit){
//         cout << next << " ";
//         a=b;
//         b=next;
//         next = a + b;
//     }

//     cout << endl;
//     return 0;
// }


//  An Armstrong number of n digits is a number equal to the sum
//  of its digits raised to the power n.
//  Find if a number is an Armstrong number or not

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main (){
//     int num, originalNum, remainder, n=0;
//     int result = 0;

//     cout << "Enter a number:";
//     cin >> num;

//     originalNum = num;

//     int temp = num;
//     while (temp!=0){
//         temp /=10;
//         n++;
//     }

//     temp = num;
//     while (temp !=0){
//         remainder = temp % 10;
//         result += pow(remainder, n);
//         temp /= 10;
//     }

//     if (result == originalNum)
//        cout << originalNum << " is an Armstrong number. "<< endl;
//     else
//        cout << originalNum << " is not an Armstrong number."<< endl;

//     return 0;
// }


//  Find the sum of digits of a number repeatedly until the sum
//  becomes a single-digit number.

// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter a number:";
//     cin >> num;

//     while(num>=10){
//         int sum = 0;
//         while (num > 0){
//             sum += num % 10;
//             num /= 10;
//         }
//         num = sum;
//     }

//     cout << "Final single digit = " << num << endl;
//     return 0;
// }


// find and print all prime numbers between 1 and N.

// #include <iostream>
// #include <cmath>
// using namespace std;

// int isPrime(int num) {
//     if (num <= 1) return 0;
//     for (int i = 2; i <= sqrt(num); i++) {
//         if (num % i == 0) return 0;
//     }
//     return 1;
// }

// int main() {
//     int N;
//     cout << "Enter N: ";
//     cin >> N;

//     for (int i = 2; i <= N; i++) {
//         if (isPrime(i) == 1) {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }


//Display the given pattern for a given number of rows.

// #include <iostream>
// using namespace std;

// int main()
// {
    
// }
