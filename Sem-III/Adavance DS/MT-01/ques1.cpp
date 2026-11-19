#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int a[5], top = -1, choice, x;

    // PUSH
    if (top == 4)
        cout << "Overflow";
    else
    {
        a[++top] = 10;
        a[++top] = 20;
        a[++top] = 30;
    }

    // DISPLAY
    cout << "Stack: ";
    for (int i = top; i >= 0; i--)
        cout << a[i] << " ";
    cout << endl;

    // POP
    if (top == -1)
        cout << "Underflow";
    else
        cout << "Popped: " << a[top--] << endl;

    // INFIX TO POSTFIX
    string infix = "2+3*4", postfix = "";
    stack<char> s;

    for (char c : infix)
    {
        if (c >= '0' && c <= '9')
            postfix += c;
        else
        {
            while (!s.empty() && s.top() == '*')
            {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    cout << "Postfix: " << postfix << endl;

    // POSTFIX EVALUATION
    stack<int> st;

    for (char c : postfix)
    {
        if (c >= '0' && c <= '9')
            st.push(c - '0');
        else
        {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if (c == '+') st.push(a + b);
            if (c == '*') st.push(a * b);
        }
    }

    cout << "Result: " << st.top();

    return 0;
}