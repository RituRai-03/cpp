// Design a program to convert a procedural implementation of a student record system 
// into an object-oriented approach using classes and objects.

#include <bits/stdc++.h>
using namespace std;

class student {
    string name;
    int roll_no;
    int sec;
public:
    void input() {
        cout << "Enter name: ";
        // cin.ignore();
        getline(cin >> ws,name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter Section: ";
        cin >> sec;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Section: " << sec << endl;
    }

};

int main() {
    student s;
    s.input();    
    // s.display();
    return 0;
}



