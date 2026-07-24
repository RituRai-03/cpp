// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     // Node creation function
//     Node* createNode(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;
//         return newNode;
//     }

//     // Insert at beginning
//     Node* insertFirst(Node* head, int value) {
//         Node* newNode = createNode(value);
//         newNode->next = head;
//         head = newNode;
//         return head;
//     }

//     // Insert at end

//     Node* insertLast(Node* head, int value) {
//         Node* newNode = createNode(value);

//         if (head == NULL) {
//             return newNode;
//         }

//         Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }

//         temp->next = newNode;
//         return head;
//     }

//     // Insert at position (middle)
//     Node* insertAtPosition(Node* head, int value, int pos) {
//         if (pos == 1) {
//             return insertFirst(head, value);
//         }

//         Node* newNode = createNode(value);
//         Node* temp = head;

//         for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//             temp = temp->next;
//         }

//         if (temp == NULL) {
//             cout << "Position out of range\n";
//             return head;
//         }

//         newNode->next = temp->next;
//         temp->next = newNode;

//         return head;
//     }

//     // Traversal
//     Node* traverse(Node* head) {
//         Node* temp = head;

//         cout << "Linked List: ";
//         while (temp != NULL) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL\n";

//         return head;
//     }
// };

// int main() {
//     Node obj;
//     Node* head = NULL;

//     head = obj.insertFirst(head, 20);
//     head = obj.insertFirst(head, 10);
//     head = obj.insertLast(head, 40);
//     head = obj.insertLast(head, 50);

//     head = obj.traverse(head);

    
//     head = obj.insertAtPosition(head, 30, 3);
//     head = obj.traverse(head);

//     return 0;
// }







#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

// Create node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert at end (for initial list)
Node* insertEnd(Node* head, int value) {
    Node* newNode = createNode(value);

    if (head == NULL) {
        return newNode;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}

// Delete from beginning
Node* deleteFirst(Node* head) {
    if (head == NULL) {
        cout << "List is empty\n";
        return head;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

// Delete from end
Node* deleteLast(Node* head) {
    if (head == NULL) {
        cout << "List is empty\n";
        return head;
    }

    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;

    return head;
}

// Delete from position (middle)
Node* deleteAtPosition(Node* head, int pos) {
    if (head == NULL) {
        cout << "List is empty\n";
        return head;
    }

    if (pos == 1) {
        return deleteFirst(head);
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        cout << "Position out of range\n";
        return head;
    }

    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;

    return head;
}

// Display list
Node* display(Node* head) {
    Node* temp = head;
    cout << "List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
    return head;
}

int main() {
    Node* head = NULL;

    // Create list
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);

    display(head);

    // Delete operations
    head = deleteFirst(head);
    display(head);

    head = deleteLast(head);
    display(head);

    head = deleteAtPosition(head, 2); // delete middle
    display(head);

    return 0;
}