#include <iostream>
#include <string>
using namespace std;

// class Student {
// private:
//     string name;
//     int rollNo;
//     float marks;
// public:
//     Student() : name(""), rollNo(0), marks(0.0) {}
    
//     Student(string n, int r, float m) : name(n), rollNo(r), marks(m) {}
    
//     void display() {
//         cout << "Name: " << name << ", Roll: " << rollNo << ", Marks: " << marks << endl;
//     }
    
//     void setData(string n, int r, float m) {
//         name = n;
//         rollNo = r;
//         marks = m;
//     }
// };

// int main() {
//     int n;
//     cout << "Enter number of students: ";
//     cin >> n;
    
//     // Dynamic array of objects using pointer
//     Student* students = new Student[n];
    
//     // Input data
//     for(int i = 0; i < n; i++) {
//         string name;
//         int roll;
//         float marks;
//         cout << "\nStudent " << i+1 << ":\n";
//         cout << "Name: ";
//         cin >> name;
//         cout << "Roll No: ";
//         cin >> roll;
//         cout << "Marks: ";
//         cin >> marks;
//         students[i].setData(name, roll, marks);
//     }
    
//     // Display using pointer arithmetic
//     cout << "\n--- Student Details ---\n";
//     for(int i = 0; i < n; i++) {
//         (students + i)->display();  // Pointer to object
//     }
    
//     delete[] students;  // Free memory
//     return 0;
// }


int big(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main(){
    cout << big(3.5,4.2);
    cout << endl;
    cout << big(10,20);
    cout << endl;
    cout << big(5.5f, 3.5f);
    return 0;
}