                     // Queue using Array and Classes

// // // // // // // // // // #include <iostream>
// // // // // // // // // // using namespace std;    

// // // // // // // // // // class ArrayQueue {
// // // // // // // // // //     private:
// // // // // // // // // //         int *arr;
// // // // // // // // // //         int front;
// // // // // // // // // //         int rear;
// // // // // // // // // //         int size;

// // // // // // // // // //     public:
// // // // // // // // // //      ArrayQueue(int n) {

// // // // // // // // // //         size = n;
// // // // // // // // // //         arr = new int[size];
// // // // // // // // // //         front = -1;
// // // // // // // // // //         rear = -1;
// // // // // // // // // //     }

// // // // // // // // // //     bool isEmpty(){
// // // // // // // // // //         return (front == -1);
// // // // // // // // // //     }

// // // // // // // // // //     bool isFull() {
// // // // // // // // // //         return (rear == size - 1);
// // // // // // // // // //     }

// // // // // // // // // //     void enqueue(int value){
// // // // // // // // // //         if (isFull()) {
// // // // // // // // // //             cout << "Queue Overflow" << endl;
// // // // // // // // // //             return;
// // // // // // // // // //         }
// // // // // // // // // //         if (front == -1)
// // // // // // // // // //             front = 0;
        
// // // // // // // // // //         rear++;
// // // // // // // // // //         arr[rear] = value;
// // // // // // // // // //         cout << value << "inserted." << endl;
// // // // // // // // // //     }

// // // // // // // // // //     void dequeue() {
// // // // // // // // // //         if (isEmpty()) {
// // // // // // // // // //             cout << "Queue Underflow" << endl;
// // // // // // // // // //             return;
// // // // // // // // // //         }

// // // // // // // // // //         cout << arr[front] << "deleted." << endl;

// // // // // // // // // //         if (front == rear) {
// // // // // // // // // //             front = rear = -1;
// // // // // // // // // //         } else {
// // // // // // // // // //             front++;
// // // // // // // // // //         }
// // // // // // // // // //     }

// // // // // // // // // //     void display() {
// // // // // // // // // //         if (isEmpty()) {
// // // // // // // // // //             cout << "Queue is Empty" << endl;
// // // // // // // // // //             return;
// // // // // // // // // //         }

// // // // // // // // // //         cout << "Queue elements: ";
// // // // // // // // // //         for (int i = front; i <= rear; i++) {
// // // // // // // // // //             cout << arr[i] << " ";
// // // // // // // // // //         }
// // // // // // // // // //         cout << endl;
// // // // // // // // // //     }

// // // // // // // // // // };

// // // // // // // // // // int main(){
// // // // // // // // // //     int capacity;
// // // // // // // // // //     cout << "Enter the maximum size of the queue: ";
// // // // // // // // // //     cin >> capacity;

// // // // // // // // // //     ArrayQueue s(capacity);
 
// // // // // // // // // //     int choice, n;

// // // // // // // // // //     do{
// // // // // // // // // //     cout<< "\n****** Linear Queue ******" << endl;
// // // // // // // // // //     cout << "1. Enqueue\n";
// // // // // // // // // //         cout << "2. Dequeue\n";
// // // // // // // // // //         cout << "3. Display\n";
// // // // // // // // // //         cout << "4. Exit\n";
// // // // // // // // // //         cout << "Enter your choice: ";
// // // // // // // // // //         cin >> choice;
// // // // // // // // // //         switch (choice) {
// // // // // // // // // //             case 1:
// // // // // // // // // //                 cout << "\nEnter the value to be inserted: ";
// // // // // // // // // //                 cin >> n;
// // // // // // // // // //                 s.enqueue(n);
// // // // // // // // // //                 cout << "Updated ";
// // // // // // // // // //                 s.display();
// // // // // // // // // //                 break;

// // // // // // // // // //             case 2:
// // // // // // // // // //                 s.dequeue();
// // // // // // // // // //                 cout << "Updated ";
// // // // // // // // // //                 s.display();
// // // // // // // // // //                 break;

// // // // // // // // // //             case 3:
// // // // // // // // // //                 s.display();
// // // // // // // // // //                 break;

// // // // // // // // // //             case 4:
// // // // // // // // // //                 cout << "Exiting...\n";
// // // // // // // // // //                 break;

// // // // // // // // // //             default:
// // // // // // // // // //                 cout << "Invalid Choice!\n";
// // // // // // // // // //         }

// // // // // // // // // //     } while (choice != 4);

// // // // // // // // // //     return 0;
// // // // // // // // // // }







// // #include <iostream>
// // using namespace std;

// // class ArrayQueue {
// // private:
// //     int* queue;
// //     int size;
// //     int front;
// //     int rear;

// // public:
// //     ArrayQueue(int n) {
// //         size = n;
// //         queue = new int[size];
// //         front = -1;
// //         rear = -1;
// //     }

// //     ~ArrayQueue() {
// //         delete[] queue;
// //     }

// //     void enqueue(int x) {
// //         if (rear == size - 1) {
// //             cout << "Queue Overflow" << endl;
// //             return;
// //         }
// //         if (front == -1) front = 0;
// //         queue[++rear] = x;
// //     }

// //     int dequeue() {
// //         if (isEmpty()) {
// //             cout << "Queue Underflow (Empty)" << endl;
// //             return -1;
// //         }
// //         int val = queue[front++];
// //         if (front > rear) {
// //             front = rear = -1; // Reset queue
// //         }
// //         return val;
// //     }

// //     int peek() {
// //         if (isEmpty()) {
// //             cout << "Queue is empty" << endl;
// //             return -1;
// //         }
// //         return queue[front];
// //     }

// //     bool isEmpty() {
// //         return front == -1 || front > rear;
// //     }

// //     void display() {
// //         if (isEmpty()) {
// //             cout << "Queue is empty, nothing to display" << endl;
// //             return;
// //         }
// //         cout << "\nCurrent Queue Elements: ";
// //         for (int i = front; i <= rear; i++) {
// //             cout << queue[i] << " ";
// //         }
// //         cout << endl;
// //     }
// // };

// // int main() {
// //     int n, x;
// //     cout << "Enter the size of queue: ";
// //     cin >> n;
// //     ArrayQueue q(n);
// //     int choice = 0;

// //     while (choice != 5) {
// //         cout << "\n\n********* Queue Operations Using Array *********";
// //         cout << "\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Peek\n 5. Exit";
// //         cout << "\n Enter your choice: ";
// //         cin >> choice;

// //         switch (choice) {
// //             case 1:
// //                 cout << "Enter element to insert: ";
// //                 cin >> x;
// //                 q.enqueue(x);
// //                 q.display();
// //                 break;
// //             case 2:
// //                 cout << "Deleted item: " << q.dequeue() << endl;
// //                 q.display();
// //                 break;
// //             case 3:
// //                 q.display();
// //                 break;
// //             case 4:
// //                 cout << "Front element: " << q.peek() << endl;
// //                 break;
// //             case 5:
// //                 cout << "Exiting..." << endl;
// //                 break;
// //             default:
// //                 cout << "Please enter a valid choice!";
// //         }
// //     }
// //     return 0;
// // }


// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// class LinkedListQueue {
// private:
//     Node* front;
//     Node* rear;

// public:
//     LinkedListQueue() {
//         front = rear = nullptr;
//     }

//     ~LinkedListQueue() {
//         while (!isEmpty()) {
//             dequeue();
//         }
//     }

//     void enqueue(int x) {
//         Node* newNode = new Node(x);
//         if (rear == nullptr) {
//             front = rear = newNode;
//             return;
//         }
//         rear->next = newNode;
//         rear = newNode;
//     }

//     int dequeue() {
//         if (isEmpty()) {
//             cout << "Queue Underflow (Empty)" << endl;
//             return -1;
//         }
//         Node* temp = front;
//         int val = temp->data;
//         front = front->next;
//         if (front == nullptr) {
//             rear = nullptr;
//         }
//         delete temp;
//         return val;
//     }

//     int peek() {
//         if (isEmpty()) {
//             cout << "Queue is empty" << endl;
//             return -1;
//         }
//         return front->data;
//     }

//     bool isEmpty() {
//         return front == nullptr;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is empty, nothing to display" << endl;
//             return;
//         }
//         cout << "\nCurrent Queue Elements: ";
//         Node* temp = front;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     LinkedListQueue q;
//     int choice = 0, x;

//     while (choice != 5) {
//         cout << "\n\n********* Queue Operations Using Linked List *********";
//         cout << "\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Peek\n 5. Exit";
//         cout << "\n Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter element to insert: ";
//                 cin >> x;
//                 q.enqueue(x);
//                 q.display();
//                 break;
//             case 2:
//                 cout << "Deleted item: " << q.dequeue() << endl;
//                 q.display();
//                 break;
//             case 3:
//                 q.display();
//                 break;
//             case 4:
//                 cout << "Front element: " << q.peek() << endl;
//                 break;
//             case 5:
//                 cout << "Exiting..." << endl;
//                 break;
//             default:
//                 cout << "Please enter a valid choice!";
//         }
//     }
//     return 0;
// }

// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // class CircularQueueArray {
// // // // // private:
// // // // //     int* queue;
// // // // //     int size;
// // // // //     int front;
// // // // //     int rear;

// // // // // public:
// // // // //     CircularQueueArray(int n) {
// // // // //         size = n;
// // // // //         queue = new int[size];
// // // // //         front = -1;
// // // // //         rear = -1;
// // // // //     }

// // // // //     ~CircularQueueArray() {
// // // // //         delete[] queue;
// // // // //     }

// // // // //     bool isEmpty() {
// // // // //         return front == -1;
// // // // //     }

// // // // //     bool isFull() {
// // // // //         return (rear + 1) % size == front;
// // // // //     }

// // // // //     void enqueue(int x) {
// // // // //         if (isFull()) {
// // // // //             cout << "Queue Overflow" << endl;
// // // // //             return;
// // // // //         }
// // // // //         if (isEmpty()) {
// // // // //             front = rear = 0;
// // // // //         } else {
// // // // //             rear = (rear + 1) % size;
// // // // //         }
// // // // //         queue[rear] = x;
// // // // //     }

// // // // //     int dequeue() {
// // // // //         if (isEmpty()) {
// // // // //             cout << "Queue Underflow (Empty)" << endl;
// // // // //             return -1;
// // // // //         }
// // // // //         int val = queue[front];
// // // // //         if (front == rear) {
// // // // //             front = rear = -1; // Reset queue
// // // // //         } else {
// // // // //             front = (front + 1) % size;
// // // // //         }
// // // // //         return val;
// // // // //     }

// // // // //     int peek() {
// // // // //         if (isEmpty()) {
// // // // //             cout << "Queue is empty" << endl;
// // // // //             return -1;
// // // // //         }
// // // // //         return queue[front];
// // // // //     }

// // // // //     void display() {
// // // // //         if (isEmpty()) {
// // // // //             cout << "Queue is empty, nothing to display" << endl;
// // // // //             return;
// // // // //         }
// // // // //         cout << "\nCurrent Circular Queue Elements: ";
// // // // //         int i = front;
// // // // //         while (true) {
// // // // //             cout << queue[i] << " ";
// // // // //             if (i == rear) break;
// // // // //             i = (i + 1) % size;
// // // // //         }
// // // // //         cout << endl;
// // // // //     }
// // // // // };

// // // // // int main() {
// // // // //     int n, x;
// // // // //     cout << "Enter the size of circular queue: ";
// // // // //     cin >> n;
// // // // //     CircularQueueArray q(n);
// // // // //     int choice = 0;

// // // // //     while (choice != 5) {
// // // // //         cout << "\n\n********* Circular Queue Operations Using Array *********";
// // // // //         cout << "\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Peek\n 5. Exit";
// // // // //         cout << "\n Enter your choice: ";
// // // // //         cin >> choice;

// // // // //         switch (choice) {
// // // // //             case 1:
// // // // //                 cout << "Enter element to insert: ";
// // // // //                 cin >> x;
// // // // //                 q.enqueue(x);
// // // // //                 q.display();
// // // // //                 break;
// // // // //             case 2:
// // // // //                 cout << "Deleted item: " << q.dequeue() << endl;
// // // // //                 q.display();
// // // // //                 break;
// // // // //             case 3:
// // // // //                 q.display();
// // // // //                 break;
// // // // //             case 4:
// // // // //                 cout << "Front element: " << q.peek() << endl;
// // // // //                 break;
// // // // //             case 5:
// // // // //                 cout << "Exiting..." << endl;
// // // // //                 break;
// // // // //             default:
// // // // //                 cout << "Please enter a valid choice!";
// // // // //         }
// // // // //     }
// // // // //     return 0;
// // // // // }


// // // // #include <iostream>
// // // // using namespace std;

// // // // struct Node {
// // // //     int data;
// // // //     Node* next;
// // // //     Node(int val) : data(val), next(nullptr) {}
// // // // };

// // // // class CircularQueueLinkedList {
// // // // private:
// // // //     Node* front;
// // // //     Node* rear;

// // // // public:
// // // //     CircularQueueLinkedList() {
// // // //         front = rear = nullptr;
// // // //     }

// // // //     ~CircularQueueLinkedList() {
// // // //         while (!isEmpty()) {
// // // //             dequeue();
// // // //         }
// // // //     }

// // // //     bool isEmpty() {
// // // //         return front == nullptr;
// // // //     }

// // // //     void enqueue(int x) {
// // // //         Node* newNode = new Node(x);
// // // //         if (isEmpty()) {
// // // //             front = rear = newNode;
// // // //             rear->next = front;
// // // //             return;
// // // //         }
// // // //         rear->next = newNode;
// // // //         rear = newNode;
// // // //         rear->next = front;
// // // //     }

// // // //     int dequeue() {
// // // //         if (isEmpty()) {
// // // //             cout << "Queue Underflow (Empty)" << endl;
// // // //             return -1;
// // // //         }
// // // //         int val;
// // // //         if (front == rear) {
// // // //             val = front->data;
// // // //             delete front;
// // // //             front = rear = nullptr;
// // // //         } else {
// // // //             Node* temp = front;
// // // //             val = temp->data;
// // // //             front = front->next;
// // // //             rear->next = front;
// // // //             delete temp;
// // // //         }
// // // //         return val;
// // // //     }

// // // //     int peek() {
// // // //         if (isEmpty()) {
// // // //             cout << "Queue is empty" << endl;
// // // //             return -1;
// // // //         }
// // // //         return front->data;
// // // //     }

// // // //     void display() {
// // // //         if (isEmpty()) {
// // // //             cout << "Queue is empty, nothing to display" << endl;
// // // //             return;
// // // //         }
// // // //         cout << "\nCurrent Circular Queue Elements: ";
// // // //         Node* temp = front;
// // // //         do {
// // // //             cout << temp->data << " ";
// // // //             temp = temp->next;
// // // //         } while (temp != front);
// // // //         cout << endl;
// // // //     }
// // // // };

// // // // int main() {
// // // //     CircularQueueLinkedList q;
// // // //     int choice = 0, x;

// // // //     while (choice != 5) {
// // // //         cout << "\n\n********* Circular Queue Operations Using Linked List *********";
// // // //         cout << "\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Peek\n 5. Exit";
// // // //         cout << "\n Enter your choice: ";
// // // //         cin >> choice;

// // // //         switch (choice) {
// // // //             case 1:
// // // //                 cout << "Enter element to insert: ";
// // // //                 cin >> x;
// // // //                 q.enqueue(x);
// // // //                 q.display();
// // // //                 break;
// // // //             case 2:
// // // //                 cout << "Deleted item: " << q.dequeue() << endl;
// // // //                 q.display();
// // // //                 break;
// // // //             case 3:
// // // //                 q.display();
// // // //                 break;
// // // //             case 4:
// // // //                 cout << "Front element: " << q.peek() << endl;
// // // //                 break;
// // // //             case 5:
// // // //                 cout << "Exiting..." << endl;
// // // //                 break;
// // // //             default:
// // // //                 cout << "Please enter a valid choice!";
// // // //         }
// // // //     }
// // // //     return 0;
// // // // }