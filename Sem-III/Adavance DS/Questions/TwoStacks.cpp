#include <iostream>
using namespace std;

class TwoStacks {
    int *arr;      // array to store elements
    int size;      // size of array
    int top1, top2; // top pointers for both stacks

public:
    // Constructor
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;       // stack1 starts from left
        top2 = size;     // stack2 starts from right
    }

    // Push into stack1
    void push1(int x) {
        if (top1 < top2 - 1) { // check for space
            arr[++top1] = x;
        } else {
            cout << "Stack Overflow\n";
        }
    }

    // Push into stack2
    void push2(int x) {
        if (top1 < top2 - 1) { // check for space
            arr[--top2] = x;
        } else {
            cout << "Stack Overflow\n";
        }
    }

    // Pop from stack1
    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        } else {
            return -1; // stack1 empty
        }
    }

    // Pop from stack2
    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        } else {
            return -1; // stack2 empty
        }
    }
};

// Example usage
int main() {
    TwoStacks ts(10); // array of size 10

    ts.push1(2);
    ts.push1(3);
    ts.push2(4);

    cout << ts.pop1() << " "; // 3
    cout << ts.pop2() << " "; // 4
    cout << ts.pop2() << " "; // -1

    return 0;
}
