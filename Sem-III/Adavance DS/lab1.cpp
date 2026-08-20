// 1.1 Implement Stack using Array
//1.2 Implement Stack using Linked List
//1.3 Expression coversion using stack i). i).Infix to Postfix
//1.4 Evaluate an Expression using stack : 1) Evaluate Postfix Exp



                                //STACK USING ARRAY

#include <bits/stdc++.h>
using namespace std;

class ArrayStack {
    public:
      int* stack;
      int size;
      int top;
      ArrayStack (int n) {
        size=n;
        stack = new int[size];
        top = -1;
      }
      void push(int x) {
        if(top == size -1){
            cout << "Stack Overflow" << endl;
            return;
        }
        stack[++top] = x;
      }

      int pop() {
        if (isEmpty()) {
            cout << "Stack is Empty"<< endl;
            return -1;
        }

            return stack[top--];
            // int temp = stack[top];
            // top--;
            // return temp;

        }
       int peek() {
        if (isEmpty()){
            cout << "Stack is Empty" << endl;
            return -1;
        }
         return stack[top];        
       }
       bool isEmpty(){
        return top == -1;
       }

       void display() {
        if(isEmpty())
            cout <<"Stack is Empty, nothing to display."<< endl;
            else
            {

                for(int i=top; i>=0; i--)
                {
                    cout <<"\n"<<stack[i];
                }
            }    
       }
      };

      int main() {
          int n,x;
          cout << "Enter the size of Stack : " << endl;
          cin>>n;
          ArrayStack s(n);
          int choice = 0;
          cout << "\n  STACK OPERATIONS USING ARRAY  \n" ;
          cout << "\n-----\n" << endl;
         
          while(choice !=5){

            cout <<"\n\n choose one from below options : \n ";
            cout << "\n 1.Push \n 2. Pop\n 3.Display \n 4. Peek \n 5. Exit";
            cout << "\n Enter your Choice: \n";
            cin>>choice;

            switch(choice){

                case 1:{
                    cout<< "Enter the element to be inserted in Stack : " << endl;
                    cin>>x;
                    s.push(x);
                    s.display();
                    break;
                }

                case 2:
                {
                    cout <<"The Deleted item is: " <<s.pop();
                    s.display();
                    break;
                }

                case 3 :
                {
                    s.display();
                    break;
                }
                
                case 4 :
                {
                    s.peek();
                    break;
                }

                case 5 :
                {
                    cout<< "Exiting...";
                    break;
                }

                default :
                {
                    cout << "Please Enter valid choice";
                }
            };

          }

          return 0;

      }
      


                                 //STACK USING LINKED LIST 


      

#include <iostream>++
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedListStack {
private:
    Node* top;

public:
    LinkedListStack() {
        top = nullptr;
    }

    ~LinkedListStack() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        Node* temp = top;
        int poppedVal = temp->data;
        top = top->next;
        delete temp;
        return poppedVal;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty, nothing to display" << endl;
            return;
        }
        cout << "\nCurrent Stack Elements:";
        Node* temp = top;
        while (temp != nullptr) {
            cout << "\n" << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedListStack s;
    int choice = 0, x;

    while (choice != 5) {
        cout << "\n\n********* Stack Operations Using Linked List *********\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> x;
                s.push(x);
                s.display();
                break;
            case 2:
                cout << "Deleted item: " << s.pop() << endl;
                s.display();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Top element: " << s.peek() << endl;
                break;
            case 5:
                cout << "Exiting system..." << endl;
                break;
            default:
                cout << "Invalid choice! Enter options 1 to 5.";
        }
    }
    return 0;

}