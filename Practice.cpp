// #include <iostream>
// #include <vector>
// using namespace std;



//Taking input on coding platforms

//1.Single Value  in a single line.


    // int a;
    // cin >> a;
    // cout << "My number is:" << a;
        

//2. Multiple input in a single line.
 
// int a, b;
// cin >> a >> b;
// cout << a << " "<< b <<  endl;


/* Write a program to take three inputs a, b, and c,
 and output their sum.*/

// int a, b, c;
// cin >> a >> b >> c;
// cout <<  "The sum is; " << a+b+c ;



/*Create a Basic Calculator that 
perform additon and substraction.*/


// int a, b;
// cin >> a >> b;
// int sum = a+b;
// int diff = a-b;
// cout << "sum: " << sum <<endl;
// cout << "Difference:" << diff << endl;


//One value to Multiple variables

// int x, y, z;
//  x = y = z = 50;
// cout << x+y+z;

//IDENTIFIERS

// // Good variable name
//   int minutesPerHour = 60;
  
//   // OK, but not so easy to understand what m actually is
//   int m = 60;
  
//   cout << minutesPerHour << "\n";
//   cout << m;

//CONSTANTS

// conts int myNum = 15; //myNum will always be 15
// myNum =10; //error: assignment of read-only varaible 'myNum'

// conts int myNum = 15; //myNum will always be 15
// myNum =15; //No error: assignment of read-only varaible 'myNum'


//VARIABE EXAMPLES

//Real-Life Examoples

 //student data

//  int studentID = 15;
//  int studentAge = 23;
//  float studentFee = 75.25;
//  char studentGrade = 'B';

//  // Print variables
//  cout << "Student ID:" << studentID << "\n";
//  cout << "Student Age:"<< studentAge <<"\n";
//  cout << "Student Fee:"<<studentFee <<"\n";
//  cout << "Student Grade:" << studentGrade <<"\n";


//  //Calculate the Area of a Rectangle

//  int length = 4;
//  int width =6;

//  int area = length * width;

//  cout << "length is:" << length <<"\n";
//  cout << "width is:" << width <<"\n";
//  cout << "Area of the reactangle is:" << area <<"\n";





//SINGLE NUMBER

/*Given a non-empty array of integers nums, 
every element appears twice except for one. 
Find that single one.*/


//     int singleNumber(vector<int>& nums){
//         int result = 0;
//         for (int num: nums){
//             result ^= num; //XOR cancels duplicates
//         }
//         return result;
//     }
//   int main(){
//     vector<int> nums = {4, 1, 2, 2, 1};
//     cout <<"Single number is:" << singleNumber(nums) << endl;


/*Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. 
Find the two elements that appear only once. 
You can return the answer in any order.*/



// int twoelement(vector<int>& nums)
//  int result =0;
//   for (int num: nums){
//     result ^= num;

//   }

//   int main(){
//     vector <int> nums= {1, 2, 1, 3, 2, 5};
//     cout << "two elements:"<< twoelement(nums)<< endl;

// }

//ST-2



//Case 1: Single value in a single line


// #include <iostream>
// using namespace std;

// int main() {
//   int x;
//   cout << "Enter a single integer:";
//   cin >> x;
//   cout << "You entered:"<< x << endl;
//   return 0;

// }


//Case 2: Multiple known values in a single line

// #include <iostream>
// using namespace std;

// int main()
// {
//   int arr[5];
//   cout << "Enter 5 intergers separated by  spaces:";
//   for (int i = 0; i < 5; ++i)
//   {
//     cin >> arr[i];
//   }
//   cout << "You entered:";
//   for (int i = 0; i < 5; ++i)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }


//Case 3: Multiple known values in multiple lines
 

// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;

// int main(){
//   string line;
//   int value;

//   cout << "Enter integer (one per line). Type 'q' to stop:  \n";

//   while (true) {
//     getline(cin, line);
//     if (line == "q"|| line == "Q") break;

//     stringstream ss(line);
    
//     if (ss >> value){
      
//       cout << "Accepted:" << num << endl;
//     } else {
//       cout << "Invalid  input. Try again.\n";
//     }
//   }

  
//   cout << "Done reading values." << endl;

//   return 0;
// }



//IF statement


// #include <iostream>
// using namespace std;

// int main(){
//    int x=20;
//    int y=18;
//   if (x > y){
//   cout << "x is greater than y";
// }

//ELSE

// int time = 20;
// if (time <18) {
//   cout << "Good day.";
// }else{
//   cout <<"Good evening.";
// }

//ELSE IF

// int time = 22;
// if (time < 10) {
//   cout << "Good morning.";
// }else if (time < 20) {
//   cout << "Good day.";
// }else{
//   cout << "Good evening.";
// }

// int time = 20;
// string result = (time<18)? "Good day." : "Good evening.";
// cout<<result;


//NESTED TERNARY 

// int time =22;
// string message = (time < 12)? "Good morning."
// :(time<18)?"Good afternoon."
// :"Good evening.";
// cout<<message;


//NESTED IF

// int x=15;
// int y=25;

// if (x>10){
//   cout<<"x is greater than 10\n";
//   //nested if
//   if (y>20){
//     cout << "y is also greater than 20\n";
//   }
// }

// int age = 20;
// bool isCitizen  = true;

// if (age>=18){
//   cout << "Old  enough to vote. \n";

//   if (isCitizen){
//     cout << "And you are a citizen, so you can vote!\n";
//   }
// }else{
//   cout <<"not old enough to vote.\n";
// }

//Logical operators

//AND(&&)

// int a = 200;
// int b=33;
// int c=500;

// if (a>b && c>a){
//   cout <<"both conditions are true";
// }

//OR(||)

// int a=200;
// int b=33;
// int c=500;

// if (a>b || a>c){
//   cout <<"At least one condition is true";
// }


//NOT(!)

// int a=33;
// int b=200;

// if (!(a>b)){
//   cout << "a is NOT greater than b";
// }

//SWITCH


//break


// int day=4;
// switch(day){
//   case 1:
//   cout<<"Monday";
//   break;
//   case 2:
//   cout<<"Tuesday";
//   break;
//   case 3:
//   cout<<"Wednesday";
//   break;
//   case 4:
//   cout<<"Thursday";
//   break;
//   case 5:
//   cout<<"Friday";
//   break;
//   case 6:
//   cout<<"Saturday";
//   break;
//   case 7:
//   cout<<"Sunday";
//   break;
// }

//default

// int day=4;
// switch (day){
//   case 6:
//   cout << "today is saturday";
//   break;
//   case 7:
//   cout << "today is sunday";
//   break;
//   default:
//   cout << "looking forward to the weekend";
// }


//While Loop

// int i =0;
// while (i<5){
//   cout<<i<<"\n";
//   i++;
// }


//Countdown Example

// int countdown =3;

// while(countdown>0){
//   cout<<countdown<<"\n";
//   countdown--;
// }
// cout << "Happy New Year!!\n";


//Do/While Loop


// int i=0;
// do{
//   cout<< i << "\n";
//   i++;
// }
// while(i<5);

//false statement

// int i=10;
// do{
//   cout<<"i is"<< i <<"\n";
//   i++; 
// }while(i<5);

//do/while Loop +ve number example

// int number;
// do{
//   cout<<"Enter a positive number:";
//   cin>>number;
// } while (number>0);



//Print only even numbers between 0 and 10(INCLUSIVE)

// int i=0;

// while (i<=10) {
//   cout << i << "\n";
//   i += 2;
// }

// return 0;
// } 

//use a while loop to reverse some numbers:

// #include <iostream>
// using namespace std;

// int main(){
//     int numbers = 12345;

//     int revNumbers =  0;

//     while(numbers){
//         revNumbers = revNumbers*10 + numbers % 10;

//         numbers /= 10;
//     }
//     cout << "Reversed numbers:" << revNumbers << "\n";

// for(int i=1;i<=3;i++){
//     for(int j=1; j<=3;j++){
//         cout << "*";
//     }
//     cout << endl;
// }




  

// int main() {
    // int n;
    // cout << "Enter number of rows: ";
    // cin >> n;

    // for (int i = 1; i <= n; i++) {
    //     // Print leading spaces
    //     for (int j = 1; j <= n - i; j++) {
    //         cout << "  ";  // Two spaces for alignment
    //     }

    //     // Print 1s with spaces
    //     for (int k = 1; k <= i; k++) {
    //         cout << "1 ";
    //     }

    //     cout << endl;
    // }
   



//     int n = 5;
// for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i; j++) cout << " ";
//     for (int k = 1; k <= i; k++) cout << k << " ";
//     cout << endl;
// }


// int n = 5;
// for (int i = n; i >= 1; i--) {
//     for (int j = 1; j <= i; j++) cout << j << " ";
//     cout << endl;
// }

// #include <iostream>
// using namespace std;

// int main(){

// int n = 5;

// // Upper half
// for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i; j++) cout << " ";
//     for (int k = 1; k <= i; k++) cout << "* ";
//     cout << endl;
// }

// // Lower half
// for (int i = n - 1; i >= 1; i--) {
//     for (int j = 1; j <= n - i; j++) cout << " ";
//     for (int k = 1; k <= i; k++) cout << "* ";
//     cout << endl;
// }


//      return 0;
// }   


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[100];   // simple fixed-size array

//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int smallest = arr[0];
//     int secondSmallest = arr[1];

//     // Ensure smallest < secondSmallest
//     if (secondSmallest < smallest) {
//         int temp = smallest;
//         smallest = secondSmallest;
//         secondSmallest = temp;
//     }

//     // Find second smallest
//     for (int i = 2; i < n; i++) {
//         if (arr[i] < smallest) {
//             secondSmallest = smallest;
//             smallest = arr[i];
//         }
//         else if (arr[i] < secondSmallest && arr[i] != smallest) {
//             secondSmallest = arr[i];
//         }
//     }

//     cout << "Second smallest element: " << secondSmallest;

//     return 0;
// }


// A digital lock uses a security string . For verification, the sysytem reverse 
// the string and compares it. Your task is to reverse the given string.


// #include<iostream>
// #include <algorithm>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter the security string: ";
//     cin>>s;

//     reverse(s.begin(), s.end());

//     cout << "Reversed string: " << s << endl;

//     return 0;

// }


// teacher wants to analyze student performance. You are requiredto store the marks of 
// 5 subjects in an array, calculate the average marks, and store the result in a vector.


// #include <iostream>
// #include <vector>
// using namespace std;

//  int main(){
//     int marks[5];
//     int sum =0;

//     cout << "Enter marks of 5 subjects: ";
//     for (int i=0; i<5; i++){
//         cin >> marks[i];
//         sum += marks[i];
//     }
//     double average = sum / 5.0;
//     vector<double> results;
//     results.push_back(average);
//     cout << "Average marks: " << average << endl;
//     return 0;
//  }

// Given a number N and a natursl number K>0. Concatenate N,K times. Then repeatedly add 
// all the digits of the resultant number, until the result has only a single digit.




// #include <iostream>
// #include <string>

// using namespace std;


// int getSingleDigit(string N, long long K) {
//     long long digitSumN = 0;

    
//     for (char c : N) {
//         digitSumN += (c - '0');
//     }

    
//     long long totalSum = digitSumN * K;

    
//     if (totalSum == 0) return 0;
    
//     int result = totalSum % 9;
//     return (result == 0) ? 9 : result;
// }

// int main() {
//     string N;
//     long long K;

//     cout << "Enter number N: ";
//     cin >> N;
//     cout << "Enter number of concatenations K: ";
//     cin >> K;

//     cout << "The single digit result is: " << getSingleDigit(N, K) << endl;

//     return 0;
// }



// Write a Program to read a word from the console, concatenate "a student" to it, and print it back to the console.

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string word;
//     cout << "Enter a word: ";
//     cin >> word;

//     string result = word + " a student";

//     cout << "Result: " << result << endl;

//     return 0;
// }


// Given a positive number X. Find all jumping numbers less than or equal to X.
// A number is called a jumping number if all adjacent digits in it differ by 1.
// All single digit numbers are considered as jumping numbers.


// Read three integers from the console and print their product.


// #include <iostream>
// using namespace std;
// int main(){
//     int a, b, c;
//     cout << "Enter three integers: ";
//     cin >> a >> b >> c;

//     int product = a * b * c;

//     cout << "Product: " << product << endl;

//     return 0;
// }


// Read name, age and roll number from three different lines and print them in a single line.

#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age;
    int rollNumber;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter roll number: ";
    cin >> rollNumber;

    cout << "Name: " << name << ", Age: " << age << ", Roll Number: " << rollNumber << endl;

    return 0;
}