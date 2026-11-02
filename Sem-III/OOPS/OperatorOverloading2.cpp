#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
     Counter(int v = 0) : value(v) {}

    Counter operator++(int) {
        Counter temp = *this;  
        value++;               
        return temp;           
    }

    
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Display function
    void display() const {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Counter c1(10);

    cout << "Initial: ";
    c1.display();

  
    Counter c2 = c1++;

    cout << "\nAfter c1++ (post-increment):" << endl;
    cout << "c1 (updated):   ";
    c1.display();
    cout << "c2 (old value): ";
    c2.display();


    Counter c3 = ++c1;
    cout << "\nAfter ++c1 (pre-increment):" << endl;
    cout << "c1: ";
    c1.display();
    cout << "c3: ";
    c3.display();

    return 0;
}